/*Lab2D*/
/*Write codes description here*/
/*Name: Kua Khai Siang*/
/*USM Email: kuakhaisiang2003@student.usm.my*/
/*GitHub Username: kuakhaisiang2003*/
/*Matric No.: 23300856*/

#if __linux__                                           //DO NOT EDIT OR REMOVE
    #define CATCH_CONFIG_RUNNER                         //DO NOT EDIT OR REMOVE
    #include "catch.hpp"                                //DO NOT EDIT OR REMOVE
    int runCatchTests(int argc, char* const argv[]){    //DO NOT EDIT OR REMOVE
        return Catch::Session().run(argc, argv);}       //DO NOT EDIT OR REMOVE
#endif                                                  //DO NOT EDIT OR REMOVE

#include "main.hpp"                                     //Use this header file for all the functions' declaration
#include <iostream>
#include <string>
using namespace std;
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    //add and complete your codes after this line

    int mark;
    
    cout << "Enter mark > ";
    cin >> mark;

    string grade = get_grade(mark);

    switch (mark) {
    case 0 ... 39: 
        cout << "Your grade: " << grade << " (FAIL)" << endl;
        break;
    case 40 ... 100: 
        cout << "Your grade: " << grade << " (PASS)" << endl;
        break;
    default: 
        cout << "Invalid mark. Re-run the program with mark between 0 and 100.";
    }

    return 0;
}

string get_grade(int mark) {
    switch (mark) {
    case 80 ... 100: 
        return "A";
        break;
    case 70 ... 79:
        return "A-";
        break;
    case 64 ... 69:
        return "B+";
        break;
    case 58 ... 63:
        return "B";
        break;
    case 52 ... 57:
        return "B-";
        break;
    case 46 ... 51:
        return "C+";
        break;
    case 40 ... 45:
        return "C";
        break;
    case 36 ... 39:
        return "C-";
        break;
    case 32 ... 35:
        return "D+";
        break;
    case 28 ... 31:
        return "D";
        break;
    case 25 ... 27:
        return "D-";
        break;
    case 0 ... 24:
        return "F";
        break;
    default:
        return "Invalid";
    }
}
