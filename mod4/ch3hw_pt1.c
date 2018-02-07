/*
 * =====================================================================================
 *
 *       Filename:  ch3hw_pt1.c
 *
 *    Description:  Prompt the user for an automobile service. Each service 
 *                  type is composed of two strings. Output the user's input.
 *
 *        Version:  1.0
 *        Created:  02/06/2018 03:36:59 PM
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
const int oilI = 35;
const int tireI = 19;
const int washI=7;
// Function Prototypes

// Main Function
int main()
{
    char oil1[] = "oil";
    char oil[] = "change";
    char tire[] = "tire";
    char tire1[] = "rotation";
    char wash[] = "car";
    char wash1[] = "wash";
    char userJob1[50];
    char userJob2[50];
    int cost = 0;
    
    printf("Enter desired auto service:\n");
    scanf("%s %s", userJob1, userJob2);

    printf("You entered: %s %s\n", userJob1, userJob2);
if( strcmp(userJob1, oil1) == 0  && strcmp(userJob2, oil) == 0)
    {   
    cost = cost + oilI;
    printf("Cost of oil change: $35\n");

    }

else if( strcmp(userJob1, tire) == 0  && strcmp(userJob2, tire1) == 0)
{
    cost = cost + tireI;
    printf("Cost of tire rotation: $19\n");
}

else if( strcmp(userJob1, wash) == 0  && strcmp(userJob2, wash1) == 0)
{
    cost = cost + washI;
    printf("Cost of car wash: $7\n");
}
else
{
printf("Error: Requested service is not recognized\n");
}
    return 0;
}
// Function Definitions


