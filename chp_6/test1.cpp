
//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

/*
   This file is known as calculator02buggy.cpp

   I have inserted 5 errors that should cause this not to compile
   I have inserted 3 logic errors that should cause the program to give wrong results

   First try to find an remove the bugs without looking in the book.
   If that gets tedious, compare the code to that in the book (or posted source code)

   Happy hunting!

*/

#include "../short_lib.h"

//------------------------------------------------------------------------------

class Token {
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }    
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

int main() {
    
}