/*Lab2A*/
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
#include <cmath>
using namespace std;
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    //add and complete your codes after this line
   
    int a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    double discriminant = checkdiscriminant(a, b, c);

    if (discriminant > 0) {
        double solution1 = getplus(discriminant, a, b, c);
        double solution2 = getminus(discriminant, a, b, c);
        cout << "Solution 1: " << solution1 << endl;
        cout << "Solution 2: " << solution2 << endl;
    } else if (discriminant == 0) {
        double solution = getplus(discriminant, a, b, c);
        cout << "Solution 1: " << solution << endl;
    } else {
        cout << "Complex solutions" << endl;
    }

    return 0;
}


double checkdiscriminant(int a, int b, int c) {
    return (b * b - 4 * a * c);
}


double getplus(double discriminant, int a, int b, int c) {
    return (-b + sqrt(discriminant)) / (2 * a);
}


double getminus(double discriminant, int a, int b, int c) {
    return (-b - sqrt(discriminant)) / (2 * a);
}
