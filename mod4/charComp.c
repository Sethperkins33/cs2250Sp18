/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> // for character operations
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9\n");
    scanf("%c", &num);
    if(num == '0')
    { 
        printf("you entered 0\n");
    }
    else
    { 
        printf("you entered non-zero[%c]\n", num);
    }
    // test for alpha values`
    if( isalpha(num) != 0 )
    {
        printf("it is alpha\n");
    }
    else if (isdigit(num) !=0)
    {
        printf("it is a digit\n");
    }
    else
    {
        printf("you are not alpha\n");
    }
    return 0;
}
// Function Definitions


