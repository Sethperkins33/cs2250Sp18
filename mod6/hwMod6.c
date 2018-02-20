/*
 * =====================================================================================
 *
 *       Filename:  hwMod6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:39:33 AM
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
const int PLAYERS = 5;
const int Attri = 2;

// Function Prototypes

// Main Function
int main()
{

    // 1.0) Define arrays for values
    // 1.1) Fill in values
    int pNum[5] ;
    int pRat[5];
    for(int i = 1; i <= PLAYERS; i++)
    {
        printf("Enter player %d's jersey number:\n", i);
        scanf(" %d", &pNum[i-1]);
        printf("Enter player %d's rating:\n", i);
        scanf(" %d", &pRat[i-1]);
        printf("\n");
    } //close for
    printf("ROSTER\n");
    for(int i = 1; i <= PLAYERS; ++i)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i, pNum[i-1], pRat[i-1]);
    }

    // 2) Display menu
    /* variables
       return variables0yer rating
       a - Output players above a rating
       r - Replace player
       o - Output roster
       q - Quit

       Choose an option:;*/
    // 3) Implement output roster  menu option
    // 4) 


    return 0;
}
// Function Definitions
//break down the whole program and do it piece by piece. If I have 
//questions

