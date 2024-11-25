/*Lab3A*/
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
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    //add and complete your codes after this line
    
    double num_1, num_2, result;
    char operation;

    for (;;) {
    cout << "Enter Num_1 <SPACE> Operation <SPACE> Num_2" << endl;
    cin >> num_1 >> operation >> num_2;

    cout << "Calculate > " << num_1 << " " << operation << " " << num_2 << endl;
    
    result = calc(num_1, operation, num_2);
    
    cout << fixed << setprecision(4);
    cout << "Answer: " << result << endl;

    }
}

double calc (double num_1, char operation, double num_2)
 {
    int intnum_1 = 0, intnum_2 = 0;
    
    switch (operation) {
        
        case '+':
        return num_1 + num_2;
        break;

        case '-':
        return num_1 - num_2;
        break;

        case '*':
        return num_1 * num_2;
        break;

        case '/':
        return num_1 / num_2;
        break;

        case '%': 
        intnum_1 = static_cast<int>(round(num_1));
        intnum_2 = static_cast<int>(round(num_2));
        return intnum_1 % intnum_2;
        break;
    }
    
    return 0;

 }
