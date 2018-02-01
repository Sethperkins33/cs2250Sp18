/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Comp string values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:19 AM
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

// Function Prototypes

// Main Function
int main()
{
    char word[51];
    char word2[51];
    printf("Enter a word:\n");
    scanf("%s", word);
    printf("You entered [%s]\n", word);

    //compare strings
    if(strcmp(word, "Hello") == 0)
    {
        printf("You entered [s]\n");
    }
    else
    {
        printf("You did not enter hellos\n");
        
    }
    // copy strings
    strcpy(word2, word); // word2 == word
    printf("[%s] and [%s]\n", word, word2);
 
    //
return 0; 
}
// Function Definitions


