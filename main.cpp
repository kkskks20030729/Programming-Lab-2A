/*Lab2C*/
/*Write codes description here*/
/*Name: Write your full-name here*/
/*USM Email: abc123@student.usm.my*/
/*GitHub Username: abc123*/
/*Matric No.: 987654*/

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
    
    cout << "Enter your mark > ";
    cin >> mark;
    
    if (mark < 0 || mark > 100) {
        cout << "Invalid mark. Re-run the program with mark between 0 and 100.";
    } else {
    
        string grade = get_grade(mark);
        
        if (grade == "F" || grade == "C-" || grade == "D-" || grade == "D" || grade == "D+") {
            cout << "Your grade: " << grade << " (FAIL)" << endl;
        } else {
            cout << "Your grade: " << grade << " (PASS)" << endl;
        }
    }
    
    return 0;
}

string get_grade(int mark) {
    if (mark >= 80 && mark <= 100) {
        return "A";
    } else if (mark >= 70 && mark <= 79) {
        return "A-";
    } else if (mark >= 64 && mark <= 69) {
        return "B+";
    } else if (mark >= 58 && mark <= 63) {
        return "B";
    } else if (mark >= 52 && mark <= 57) {
        return "B-";
    } else if (mark >= 46 && mark <= 51) {
        return "C+";
    } else if (mark >= 40 && mark <= 45) {
        return "C";
    } else if (mark >= 36 && mark <= 39) {
        return "C-";
    } else if (mark >= 32 && mark <= 35) {
        return "D+";
    } else if (mark >= 28 && mark <= 31) {
        return "D";
    } else if (mark >= 25 && mark <= 27) {
        return "D-";
    } else if (mark >= 0 && mark <= 24) {
        return "F";
    } else {
        return "Invalid";
    }
}
