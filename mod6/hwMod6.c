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
    char Up = 'n';
    for(int i = 1; i <= PLAYERS; i++)
    {
        printf("Enter player %d's jersey number:\n", i);
        scanf(" %d", &pNum[i-1]);
        printf("Enter player %d's rating:\n", i);
        scanf(" %d", &pRat[i-1]);
        printf("\n");
    } 
    printf("ROSTER\n");
    for(int i = 1; i <= PLAYERS; ++i)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i, pNum[i-1], pRat[i-1]);
    }
    printf("\n");
    //close for
    for(int r =0; Up != 'q';r++)
    {
        printf("MENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n\n");
        printf("Choose an option:\n");
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
        scanf(" %c", &Up);
        // do switch for each variable

        switch(Up)
        {
            case 'u':
                printf("Update");
                break;
            case 'a':
                break;
            case 'r':
                break;
            case 'o':
                printf("ROSTER\n");
                for(int i = 1; i <= PLAYERS; ++i)
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", i, pNum[i-1], pRat[i-1]);
                }
                printf("\n");
                break;
            case 'q':
                break;
        }
    }


    return 0;
}

// Function Definitions
//break down the whole program and do it piece by piece. If I have 
//questions

