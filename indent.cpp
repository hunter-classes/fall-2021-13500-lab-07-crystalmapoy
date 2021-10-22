#include <iostream>
#include <cctype>
#include "indent.h"

int countChar(std::string line, char c){
    int counter;
    for(int i =0; i<line.length();i++){
        if(line[i]==c){
            counter++;
        }
    }
    return counter;
}
