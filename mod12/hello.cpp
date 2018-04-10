/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:44:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> // For C+
#include <iostream>  // For C++
using namespace std; // For C++ standard name
// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl;
    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    cout << "What is your name?" << endl;
    //cin >> name;
    cin.ignore(); //should take care of the extra enter key
    getline(cin, name);  // take all input including spaces
    cout << "Hello " << name << endl;


    return 0;
}
// Function Definitions


