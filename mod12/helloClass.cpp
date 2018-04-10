/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  Hello World Class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:12:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  // for c
#include <iostream>  // For C++
using namespace std; //  For C++

// Constants
class HelloNum
{
    // Only the developer can see this area
    private:
    int number; // attribute
    //The user has access here, by writing Functions or Methods in C++
    public:
    void SetNumber(int n);   // Setter
    int GetNumber();         // Getter
    void ShowNumber(); // prototype
};
// Function Prototypes

// Main Function
int main()
{
    int num;
    HelloNum n1;
    n1.SetNumber(91);
    n1.ShowNumber();
    
    num = n1.GetNumber();
    cout<<"Number is "<< num<< endl;
    num *= 2;
    cout<< " Number is " << num<< endl;
    return 0;
}
// Function Definitions
void HelloNum::ShowNumber()
{
    cout << "Your number is " << number << endl;
    return;
}
void HelloNum::SetNumber(int n)   // Setter
{
    //Set private member
    number = n;
    return;
}

int HelloNum::GetNumber()         // Getter
{
    // Return private member
    return number;
}


