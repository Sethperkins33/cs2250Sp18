/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test for race medals position
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
    if(pos == 1)
    {
        printf("you get a gold medal!\n");
    }
    else if (pos ==2)
    {
        printf("you get a silver medal!\n");
    }
    else if(pos == 3)
    {
        printf("you get a bronze medal!\n");
    }
    else
    {
        printf("you get nothing\n");
    }

    return 0;
}
// Function Definitions


