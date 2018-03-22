/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:25 AM
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
#include <ctype.h>
// Function Definitions
void StrSpaceToHyphon(char modString[], char separator)
{
    int i = 0;
    for (i = 0; i < strlen( modString); i++)
            {

            if (modString[i] == '=')
            {

                modString[i] = '-';
                }

            }
            return;
}

//Function counts number o digits 0-9 in
//a string. Takes one arguement string to analyze
int StrCountDigits(char modString[])
{

    int i = 0;
    int total = 0;
    for (i = 0; i < strlen( modString); i++)
            {

            if (isdigit(modString[i]))
            {

                total++;
                }

            }
    return total;
}

