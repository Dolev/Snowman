//
// Created by dolev hindy on 05/03/2021.
//

#include <string>
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>


 std::string ariel::snowman(int input) {
        /*
         * exception handling - code not in format
         * more then 8 digits -throw
         * , less then 8 digits in the input (?) - if(s.length() < 8 ) throw expection
         */
        string s = to_string(input);     //converting int to string in c++
        string output =" ";
        string slash ="\\";
        string base =" ";
        string stomach =" ";
        string R_hand =" ";
        string L_hand ="\\";
        char nose=' ',L_eye=' ',R_eye=' ';
        bool isUPright=false,isUPleft=false;
        int is_left_arm_down=s[4],is_right_arm_down=s[5],is_regular_arm_right=0; //booleans
        //cout<<s[4];
                    
        for (int i = 0; i < s.length(); i++) {
            switch (i){
                case 0:
                    switch (s[i])
                    {
                        case '1':
                            cout << " _===_" <<  endl;
                            break;
                        case '2':
                            cout << " _\n ......."  <<  endl;
                            break;
                        case '3':
                            cout << "   _ "<< endl << "  /_" << slash <<  endl;
                            break;
                        case '4':
                            cout << " _ \n  (*)"  <<  endl;
                            break;
                    }
                    
                    break;
                case 1:
                    if( is_left_arm_down==2 ){ cout << L_hand ; }
                    //cout << is_left_arm_down <<s[4] ;
                    //cout << is_right_arm_down ;
                    cout << " (";
                    switch (s[i])
                    {
                        case '1':
                           nose=',';
                            break;
                        case '2':
                           nose='.';
                            break;
                        case '3':
                            nose='_';
                            break;
                        case '4':
                            nose=' ';
                            break;
                    }
                    break;
                case 2:
                    switch (s[i])
                    {
                        case '1':
                            L_eye='.';
                            break;
                        case '2':
                            L_eye='o';
                            break;
                        case '3':
                            L_eye='O';
                            break;
                        case '4':
                            L_eye='-';
                            break;
                    }
                    break;
                case 3:
                // build face
                    switch (s[i])
                    {
                        
                        case '1':
                            R_eye='.';
                            cout  << L_eye << nose  << R_eye << ')' <<endl;
                            break;
                        case '2':
                            R_eye='o';
                            cout << L_eye << nose << R_eye << ')' <<endl ; //replace
                            break;
                        case '3':
                            R_eye='O';
                            cout <<  L_eye << nose << R_eye << ')' << endl ;
                            break;
                        case '4':
                            R_eye='-';
                            cout <<  L_eye << nose << R_eye << ')' << endl ;
                            break;
                    }
                    if( is_right_arm_down == 2 ) { cout << L_hand ;}
                    break;
                case 4:
                    switch (s[i])
                    {
                        
                        case '1':
                            L_hand='<';
                            break;
                        case '2':
                            L_hand=" ";//null - we add it in face
                            break;
                        case '3':
                            L_hand='/';
                            break;
                        case '4':
                            L_hand=" ";
                            break;
                        
                    }
                    break;
                case 5:
                    switch (s[i])
                    {
                        case '1':
                            R_hand=">";
                            
                            break;
                        case '2':
                            R_hand=" ";
                            break;
                        case '3':
                            R_hand="\\";
                            break;
                        case '4':
                            R_hand=" ";
                            break;
                    }
                    break;
                case 6://build belly
                    switch (s[i])
                    {
                        case '1':
                            stomach= " : ";
                            cout << L_hand << "(" << stomach << ')' << R_hand << endl ;
                            break;
                        case '2':
                            stomach= "] [";
                            cout << L_hand << "(" << stomach << ')' << R_hand << endl ;
                            break;
                        case '3':
                            stomach= "> <";
                            cout << L_hand << "(" << stomach << ')' << R_hand << endl ;
                            break;
                        case '4':
                            stomach= "   ";
                            cout << L_hand << "(" << stomach << ')' << R_hand << endl ;
                            break;
                    }
                    break;
                case 7:
                    cout << " (";
                    switch (s[i]) {
                        case '1':
                            cout << " : ";
                            break;
                        case '2':
                            cout << "] [";
                            break;
                        case '3':
                            cout << "___";
                            break;
                        case '4':
                            cout << "   ";
                            break;
                    }
                    cout << ')';
                    break;
                default: {} //throw excpetion
            }
        }
    return  output;
    }


