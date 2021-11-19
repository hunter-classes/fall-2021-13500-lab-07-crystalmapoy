#include <iostream>
#include <cctype>
#include "unindent.h"

std::string removeLeadingSpances(std::string line){
    std::string new_word = "";
    for (int i = 0; i < line.length(); i++) {
        //This line will check if it hits a letter, character, num, etc. 
        if(!isspace(line[i])){
            //This line will give you a substring from the current index up to the end of the line.
            new_word = line.substr(i,(line.length() - i));
			break;//This will simply stop the loop, meaning once it hit this statment, then it will leave the loop
        }
    }
    return new_word;
}
