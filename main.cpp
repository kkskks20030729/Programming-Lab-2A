/*Lab2B*/
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
#include <iomanip>
using namespace std;
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    //add and complete your codes after this line
    
    double r, theta, phi;
    
    std::cout << "Enter the spherical coordinates (r, theta, phi):\n";
    std::cin >> r >> theta >> phi;

    std::cout << "Spherical coordinate entered: (" << r << ", " << theta << ", " << phi << ")\n";
    
    double x = get_Px(r, theta, phi);
    double y = get_Py(r, theta, phi);
    double z = get_Pz(r, phi);
    
    std::cout << "Equivalent Cartesian coordinate: ("
              << std::fixed << std::setprecision(3) << x << ", "
              << std::fixed << std::setprecision(3) << y << ", "
              << std::fixed << std::setprecision(3) << z << ")\n";

return 0;
}


double get_Px(double r, double theta, double phi) {
    return r * sin(phi) * cos(theta);
}


double get_Py(double r, double theta, double phi) {
    return r * sin(phi) * sin(theta);
}


double get_Pz(double r, double phi) {
    return r * cos(phi);
}

