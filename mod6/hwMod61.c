/*
 * =====================================================================================
 *
 *       Filename:  hwMod61.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2018 10:34:21 PM
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
const int WEIGHT_COUNT = 5;
// Function Prototypes

// Main Function
int main()
{
    double weight[WEIGHT_COUNT];
    double sum = 0;
    double max = 0;

    for(int i = 0; i < WEIGHT_COUNT; ++i)
    {
        printf("Enter weight %d:\n", i+1);
        scanf("%lf", &weight[i]);

    }
    for(int i = 0; i < WEIGHT_COUNT; ++i)
    {
        printf("You entered: %lf \n", weight[i]);
        sum = weight[i] + sum;
    if( max < weight[i])
    {
        max = weight[i];
    }
    }
    printf("sum of weight is %lf\n", sum);
    printf("The max weight is %lf\n", max);
    //(2) Also output the total weight, by summing the array's elements. (1 pt)

    //(3) Also output the average of the array's elements. (1 pt)

    //(4) Also output the max array element. (2 pts) 
    return 0;
}
// Function Definitions


