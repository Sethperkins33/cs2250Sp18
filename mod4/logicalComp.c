/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Test range of values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:34:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
   int grade;
   bool success = true; 
   // 1) Ask user for int value
    printf("Enter your grade percentage\n");
    scanf("%d", &grade);
    // 2) If 100 <= 90 then print A
    if (grade >= 90 && grade <= 100)
        {
            printf("You got an A\n");
        }
    // 3) If 100 <= 80 then print B
    else if (grade >= 80 && grade <= 100)
        {
            printf("You got an B\n");
        }
    // 4) If 100 <= 70 then print C
    else if (grade >= 70 && grade <= 100)
        {
            printf("You got an C\n");
        }    
    // 5) If 100 <= 60 then print E
    else 
        {
            printf("You got an E\nTake the class again\n");
            success = false;
        }
    if(success)
    {
        printf("Congrats!\n");
    }
    else
    {
        printf("See you next semester\n");
    }
    return 0;
}
// Function Definitions


