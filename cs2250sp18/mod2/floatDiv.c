/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  Learn about floats and division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age = 25;
    int grade = 3;
    double result;
    int iresult;
    // We need to cast the int to doubles
    result = (double)grade / (double)age;
    iresult = (double)grade / (double)age;
    printf("result = %lf\n", result);
    printf("result = %d\n", iresult);
    return 0;
}
// Function Definitions


