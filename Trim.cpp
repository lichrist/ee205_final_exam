//
// Created by Christian Li on 5/13/22.
//
#include <string>

#include "Trim.h"

using namespace std;

unsigned int string_length( const char inString[] ){
    if(inString == nullptr)
        return 0;
}

int left_char( const string inString ) {
    int checkString = 0;
    while( checkString < inString.size() && isspace( inString[checkString] ) ) {
        checkString++;
    }

    return checkString;
}

int right_char( const string inString ) {
    int checkString = inString.size();
    while( checkString > 0 ) {
        if( isspace( inString[checkString-1] ))
            checkString--;
    }

    return checkString;
}

const char* trim_left( const char inString[] ){
    return inString.substr( left_char( inString ), inString.size() );

    if(inString == nullptr)
        return nullptr;

}

char* map_chars( const char inString[], char buffer[] ){
///Did not have time to fix this since my computer restarted itself and did not save some commits
///What I would of done is have the trim leading the whitespace
///Trim the trailing whitespace
///Finally I replace the characters inside the string
}
