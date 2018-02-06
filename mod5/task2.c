/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number, stay in loop till one is entered.
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:07 AM
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
    int num;
    printf("enter positive number >= 0\n");
    
    
    scanf("%d", &num);
    while(num < 0)
    {
        
    printf("enter positive number >= 0\n");
    scanf("%d", &num);
    }
    printf("Done\n");
    return 0;
}
// Function Definitions


