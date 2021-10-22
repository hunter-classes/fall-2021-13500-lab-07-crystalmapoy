#include <iostream>
#include <cctype>
#include "unindent.h"

std::string removeLeadingSpances(std::string line){
    std::string new_word = "";
    for (int i = 0; i < line.length(); i++) {
        if (isspace(line[i])){
            new_word += line[i];
    }
    return new_word;
    }
}
