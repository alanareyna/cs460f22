#include <iomanip>
#include <cstdlib>
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>
#include "LexicalAnalyzer.h"

using namespace std;

//enum token_type {NONE = -1, EOFT = 0, IDENTT = 1, NUMLITT, NUMTOKENS};
static string tokennames[] = {"NONE", "EOF_T", "NUM_TOKENS", "IDENT_T", "NUMLIT_T", "STRLIT_T", "LISTOP_T",
                              "PLUS_T", "MINUS_T", "DIV_T", "MULT_T", "EQUALTO_T", "GT_T", "GTE_T", "LT_T",
                              "LTE_T", "LPAREN_T", "RPAREN_T", "SQUOTE_T", "ERROR_T", "CONS_T", "IF_T", "COND_T", "ELSE_T",
                              "DISPLAY_T", "NEWLINE_T", "AND_T", "OR_T", "NOT_T", "DEFINE_T", "LET_T", "NUMBERP_T", "LISTP_T", "ZEROP_T",
                              "NULLP_T", "STRINGP_T", "MODULO_T", "ROUND_T"};

// 2D Table array that represents DFA states
int table[18][21] = {
        {	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	ERROR_T	},
        {	1	,	9	,	11	,	9	,	9	,	9	,	2	,	3	,	5	,	DIV_T	,	4	,	MULT_T	,	10	,	SQUOTE_T	,	LPAREN_T	,	RPAREN_T	,	16	,	15	,	EQUALTO_T	,	9	,	9	},
        {	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	5	,	PLUS_T	,	4	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	,	PLUS_T	},
        {	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	5	,	MINUS_T	,	4	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	,	MINUS_T	},
        {	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	6	,	7	,	4	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	},
        {	ERROR_T	,	ERROR_T 	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	6	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	},
        {	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	6	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	},
        {	ERROR_T	,	ERROR_T 	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	8	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	,	ERROR_T	},
        {	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	8	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	,	NUMLIT_T	},
        {	IDENT_T	,	9	,	9	,	9	,	9	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	},
        {	10	,	10	,	10	,	10	,	10	,	10	,	10	,	10	,	10	,	10	,	10	,	10	,	STRLIT_T	,	10	,	10	,	10	,	10	,	10	,	10	,	10	,	10	},
        {	IDENT_T	,	9	,	9	,	12	,	13	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	},
        { 	IDENT_T	,	9	,	9	,	9	,	14	,	LISTOP_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	},
        { 	IDENT_T	,	9	,	9	,	15	,	13	,	LISTOP_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	},
        { 	IDENT_T	,	9	,	9	,	9	,	14	,	LISTOP_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	},
        { 	IDENT_T	,	9	,	9	,	9	,	9	,	LISTOP_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	IDENT_T	,	9	,	IDENT_T	},
        {	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GT_T	,	GTE_T	,	GT_T	,	GT_T	},
        { 	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LT_T	,	LTE_T	,	LT_T	,	LT_T	} };

// 1D array that stores column numbers corresponding to a character's ascii value
int colArray[128] = {20, 20, 20, 20, 20, 20, 20, 20, 20, 0, 0, 20, 20,
                     0, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
                     20, 20,20, 20, 20, 20, 20, 20, 0, 20, 12,
                     20, 20, 20, 20, 13, 14, 15, 11, 6, 20, 7,
                     8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                     10,20, 20, 16, 18, 17, 20, 20, 20, 20, 20,
                     20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
                     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,20,
                     20, 20, 20, 20, 20, 19, 20, 3, 1, 2, 4,
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1,
                     20, 20, 20, 20, 20};

// map to hold keywords
unordered_map<string, token_type> keyWords = {
        // insert map values
        {"cons", CONS_T},
        {"cond", COND_T},
        {"else", ELSE_T},
        {"display", DISPLAY_T},
        {"newline", NEWLINE_T},
        {"and", AND_T},
        {"or", OR_T},
        {"not", NOT_T},
        {"define", DEFINE_T},
        {"let", LET_T},
        {"number?", NUMBERP_T},
        {"list?", LISTP_T},
        {"zero?", ZEROP_T},
        {"null?", NULLP_T},
        {"string?", STRINGP_T},
        {"modulo", MODULO_T},
        {"round", ROUND_T}

};

LexicalAnalyzer::LexicalAnalyzer (char * filename) {
    linenum = 1;
    pos = 0;
    errors = 0;
    input.open(filename);

    // fileNameSubstring stores the actual file name without the trailing .ss
    fileNameSubstring = static_cast<string> (filename);
    fileNameSubstring = fileNameSubstring.substr(0, fileNameSubstring.length() - 3);

    // lst file
    listingFileName = fileNameSubstring + ".lst";
    // token file
    tokenFileName = fileNameSubstring + ".p1";
    // debug file
    debugFileName = fileNameSubstring + ".dbg";

    // open output files
    listingFile.open(listingFileName);
    tokenFile.open(tokenFileName);
    debugFile.open(debugFileName);

}

LexicalAnalyzer::~LexicalAnalyzer ()
{
    // This function will complete the execution of the lexical analyzer class
    input.close();
    listingFile.close();
    tokenFile.close();
    debugFile.close();
}

token_type LexicalAnalyzer::GetToken ()
{
    // This function will find the next lexeme int the input file and return
    // the token_type value associated with that lexeme
    char c;
    int col;
    int currState = 1;
    //token_type currToken;
    string tokenName;

    // deals with leading white space
    while(isspace(line[pos])){
        if(pos >= line.length()){
            getline(input, line);
            pos = 0;
            linenum++;
            line += " ";

        }
        if (input.eof()){
            debugFile << "EOF first while";
            break;
        }
    }

    // loops through the file line by line
    while(getline(input, line)){

        debugFile << "line: " << line << endl;

        listingFile << linenum << ": " << line << endl;
        // loop until we are at the end of a line
        while(pos < line.length()) {
            debugFile << "line: " << line << " at pos: " << pos << ": " << line[pos] << endl;
            debugFile << "line.length: " << line.length() << endl;

            // loop til we hit a terminal state
            while (currState >= 0) {
                c = line[pos];
                col = colArray[int(c)];
                currState = table[currState][col];
                lexeme += c;
                pos++;

                if (currState == -4 || currState == -5){
                    debugFile << "in the if loop for ident_t and numlit_t terminal states " << endl;
                    pos--;
                    lexeme.pop_back();
                }
            }
            //cout << "lexeme: " << GetLexeme() << endl;
            if (currState == -4){
                if (lexeme == "number" || lexeme == "string" || lexeme == "list" || lexeme == "zero" || lexeme == "null"){
                    if (line[pos] == '?'){
                        debugFile << "In IDENT_T terminal check" << endl;
                        lexeme += line[pos];
                        //currState = keyWords[lexeme];
                        pos++;
                    }
                }
                if (keyWords.find(lexeme) != keyWords.end()){
                    debugFile << "lexeme: " << lexeme << " found." << endl;
                    currState = keyWords[lexeme];
                }
            }
            if (currState == -20){
                ReportError(lexeme);
            }
            tokenName = GetTokenName(token_type(currState));
            debugFile << "Token name: " << tokenName << endl;
            tokenFile << tokenName << "\t\t\t\t" << lexeme << endl;
            currState = 1;
            lexeme = "";
        }

        debugFile << "Came out of the second while " << endl;
        pos = 0;

        if (input.eof()){
            debugFile << "end of file" << endl;
            token = EOF_T;
            return token;
        }

        debugFile << "hit the end of the first while" << endl;

        linenum++;
    }

    debugFile << "Hit the end of get token" << endl;


    return token;

}

string LexicalAnalyzer::GetTokenName (token_type t) const
{
    // This function returns a string containing the name of the token
    // passed to it.
    string result = tokennames[(0 - t) - 1];

    return result;
}

string LexicalAnalyzer::GetLexeme () const
{
    // This function will return the lexeme found by the most recent call to
    // the GetToken function
    return lexeme;
}

void LexicalAnalyzer::ReportError (const string & msg)
{
    // This function will be called to write an error message to a file
    cout << "Error at " << linenum << ", " << line[pos] << ":" << "Invalid character found: " << msg << endl;

}
