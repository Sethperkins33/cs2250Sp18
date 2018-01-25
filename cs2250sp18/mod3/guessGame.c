/*
 * =====================================================================================
 *
 *       Filename:  guessGame.c
 *
 *    Description:  Guess and get it right
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:08:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //for srand(int(time(0)) and rand()
#include <time.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
int input;
    int guess;
    printf("Please enter a number from 0 - 9 ");
    scanf("%d", &input);
// calculate our guess number
    srand((int)time(0));
    guess = rand() %10;
    printf("You entered [%d], the number is [%d]\n", input, guess);


    return 0;
}
// Function Definitions


