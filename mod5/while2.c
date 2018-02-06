/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:24:56 AM
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
    int num =2;
    int age = 21;
    while(num)
    {
        printf("Num [%d]\n", num);
    num--;
    }
  //this loop requires a break statement
    while(1)
    {
        if(age == 0)
        {
            printf("Thank you\n");
            break;
        }
        printf("Your age is [%d]\n",age);
     age--;
    }
    printf("done\n");
    return 0;
}
// Function Definitions


