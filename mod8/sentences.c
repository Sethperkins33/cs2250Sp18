/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:38:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants
const int STRSIZE =128;
// Function Prototypes

// Main Function
int main()
{
    char fullName[STRSIZE];
    printf("Please enter your full name:\n");
    //scanf("%s", fullName);
    fgets(fullName, STRSIZE, stdin);
    printf("Hi [%s]\n", fullName);
    for( int i = 0; i < strlen(fullName); i++)
    {
        printf("%c", fullName[i]);
    }
    return 0;
}
// Function Definitions


