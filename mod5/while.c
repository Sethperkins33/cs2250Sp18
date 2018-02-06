/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Practice "while loops"
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:48 AM
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
const int low = 1;

const int max =40;
// Function Prototypes

// Main Function
int main()
{
int userNum = 0;
unsigned int fact = 1;

    printf("Please enter a number from %d-%d\n",low, max);
    printf("and I will give you the factorial\n");

    scanf("%d", &userNum);

    if(userNum <= max && userNum >= low)
    {
        printf("Calculating the factorial\n");
        while(userNum > 0)
        {
            printf("Num = [%d], fact [%u]\n", userNum, fact);
            fact = userNum * fact;
            userNum = userNum -1;
        }//do work here
    }
    else
        printf("You didn't follow the instructions\n");
    printf("Done. Your factorial is [%u]\n", fact);
        
    return 0;
}
// Function Definitions


