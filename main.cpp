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
#include <iostream>
#include <limits>
#include <cmath>
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    //add and complete your codes after this line
    
    double num1, num2;
    char op;
    
    for (;;) {
        std::cout << "Calculate > ";
        std::cin >> num1;
        std::cin >> op;
        std::cin >> num2;


        double result = calc(num1, op, num2);
        
        if (!std::isnan(result)) {

            std::cout.precision(4);
            std::cout << std::fixed << "Answer: " << result << std::endl;
        }
    }

    return 0;
}


double calc(double num1, char op, double num2) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: Division by zero!" << std::endl;
                return std::numeric_limits<double>::quiet_NaN();
            }
            return num1 / num2;
        case '%': {
            int intNum1 = static_cast<int>(round(num1));
            int intNum2 = static_cast<int>(round(num2));
            if (intNum2 == 0) {
                std::cout << "Error: Modulus by zero!" << std::endl;
                return std::numeric_limits<double>::quiet_NaN();
            }
            return static_cast<double>(intNum1 % intNum2);
        }
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            return std::numeric_limits<double>::quiet_NaN();
    }
}
