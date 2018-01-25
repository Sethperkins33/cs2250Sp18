/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:05:38 AM
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
    char name[21]; //allocates 20 chars + NULL char
    printf("Enter Your Name:\n");
    scanf("%s", name);
    printf("your name is [%s]\n", name);
    return 0;
}
// Function Definitions


