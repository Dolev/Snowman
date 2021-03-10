//
// Created by dolev hindy on 05/03/2021.
//
#include <iostream>
#include <stdexcept>
#include <string>
#include "snowman.hpp"
using namespace std;

namespace ariel{
   const int ten = 10;
        const int one = 1;
        const int four= 4;
        const int eight = 8;
        const int Fsnowman = 11114411;
        const int Ssnowman = 33232124;
      

    void throwException(){
        throw invalid_argument("Invalid code");
    }
    //Input - number - must be 8 digits between 1-4 each digit
    //Output - snow man
    string snowman(int input){
        int output= input;
        int counter = 0;
        if(input< 0){
            throwException();
        }
     
        while( input != 0){
            int digit = input % ten;
            if(digit <one || digit > four){
                throwException();
            }
            input = input/ten;
            counter++;
        }
        if(counter != eight){
            throwException();
        }
        string Drawsnoman = " ";
        if( output == Fsnowman){
            Drawsnoman =  "_===_\n(.,.)\n( : )\n( : )";
        }
        else if(output ==Ssnowman){
            Drawsnoman =  "   _\n  /_\\\n\\(o_O)\n (] [)>\n (   )";
        }
        return Drawsnoman;
    }
}

