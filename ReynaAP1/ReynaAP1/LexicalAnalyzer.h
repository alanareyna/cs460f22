/*****************************************************************************/
/*                                                                           */
/* Assignment: CS 460 Project 1                                              */
/* Author: Dr. Watts                                                         */
/* Date: September 2022                                                      */
/* Modified by: Alana Reyna                                                  */
/* Date: October 16, 2022                                                    */
/* Description: This file contains the description of a class called         */
/*      LexicalAnalyzer.                                                     */
/*                                                                           */
/*****************************************************************************/

#ifndef LEXICALANLYZER_H
#define LEXICALANLYZER_H

#include <iostream>
#include <fstream>

using namespace std;

/*****************************************************************************/
/*                                                                           */
/* Class name: LexicalAnalyzer                                               */
/* Description: This class is designed to define methods and attributes      */
/*      needed to perform Lexical Analysis on a Scheme input file.           */
/*                                                                           */
/*****************************************************************************/

enum token_type {NONE = -1,
        EOF_T = -2,
        NUM_TOKENS = -3,
        IDENT_T = -4,
        NUMLIT_T = -5,
        STRLIT_T = -6,
        LISTOP_T = -7,
        PLUS_T = -8,
        MINUS_T = -9,
        DIV_T = -10,
        MULT_T = -11,
        EQUALTO_T = -12,
        GT_T = -13,
        GTE_T = -14,
        LT_T = -15,
        LTE_T = -16,
        LPAREN_T = -17,
        RPAREN_T = -18,
        SQUOTE_T = -19,
        ERROR_T = -20,
        CONS_T = -21,
        IF_T = -22,
        COND_T = -23,
        ELSE_T = -24,
        DISPLAY_T = -25,
        NEWLINE_T = -26,
        AND_T = -27,
        OR_T = -28,
        NOT_T = -29,
        DEFINE_T = -30,
        LET_T = -31,
        NUMBERP_T = -32,
        LISTP_T = -33,
        ZEROP_T = -34,
        NULLP_T = -35,
        STRINGP_T = -36,
        MODULO_T = -37,
        ROUND_T = -38
        };

class LexicalAnalyzer 
{
    public:
	LexicalAnalyzer (char * filename);
	~LexicalAnalyzer ();
	token_type GetToken ();
	string GetTokenName (token_type t) const;
	string GetLexeme () const;
	void ReportError (const string & msg);
	ofstream debugFile;	// .dbg
    private:
    string fileNameSubstring;
	ifstream input; 	// .ss
	ofstream listingFile;	// .lst
    string listingFileName;
	ofstream tokenFile;	// .p1
    string tokenFileName;
    string debugFileName;
    token_type token;
	string line;
	int linenum;
	int pos;
	string lexeme;
	int errors;
};

#endif
