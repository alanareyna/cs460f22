This is the Lexical Analyzer for Project 1
CS 460 - Fall 2022.

Written by: Alana Reyna

What works:
- Reads file.
- Identifies everything but NUMLIT_T and IDENT_T properly.
- Creates two output files (.lst and .P1) with the correlating input file name.

What doesn't work:
- Code will compile and run but has a core dump issue, so it may not always read through the entire file.
- Error with returning NUMLIT_T: it will include a + or - at the end of a lexeme instead of putting it at the
beginning of the lexeme
- IDENT_T: does not identify key word lexemes with leading white space.
- BIGGEST ISSUE: code does not handle white space/new lines.
