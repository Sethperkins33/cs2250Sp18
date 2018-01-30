/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test switch statements
 *    note: only works on integers, single char
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:29:57 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    switch(pos)
    {
        case 1:
        printf("you get a gold medal!\n");
        break;
        case 2:
        printf("you get a silver medal!\n");
        break;
        case 3:
        printf("you get a bronze medal!\n");
        break;
        case 14:
        case 28:
        case 36:
        printf("you get a plastic medal!\n");
        break;
        default:
        printf("you get nothing\n");
        }

    return 0;
}
// Function Definitions


