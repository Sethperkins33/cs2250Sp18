/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:05:53 AM
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
#include "superlib.h"

// Constants
const int INPUT_STR_SIZE = 50;
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE];
    printf("Enter string with spaces:\n");
    fgets(userStr, INPUT_STR_SIZE, stdin);
    
    StrSpaceToHyphon(userStr, ':');

    printf("String with new thingies: %s\n", userStr);
    return 0;
}
// Function Definitions



