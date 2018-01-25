/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Calculate Body Mass
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    double height;
    double weight;
    double bmi;
    //1) Capture weight in kg
    printf("Enter weight in kg:\n");
    scanf("%lf", &weight);

    //2) Capture height in meters
    printf("Enter height in meters:\n");
    scanf("%lf", &height);

    //3) Calculate you BMI = weight/height**2
    bmi = weight / pow(height, 2); 
    //4)Display BMI
    printf("You entered your height as %lf.\n You entered your weight as %lf.\n 
            Your BMI is %lf\n", height, weight, bmi);
    return 0;
}
// Function Definitions


