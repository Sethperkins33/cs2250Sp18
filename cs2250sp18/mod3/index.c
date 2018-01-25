/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  find one string for first name, first initial
 *    for (i = 0;; ++i) {
     
 }
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:20 AM
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
    // 1- define two strings
    char fname[20];
    char lname[20];
    
    printf("Enter first name:\n");
    scanf("%s", fname);

    printf("Enter last name:\n");
    scanf("%s", lname);
    
    printf("Hello %s %s\n", fname, lname);
    // 2- get fname info
    // 2- get lname info
    // 4- display initials
    printf("Your initials are [%c. %c.]\n", fname[0],lname[0]);
    return 0;
}
// Function Definitions


