/*
 * =====================================================================================
 *
 *       Filename:  ch3hw_pt2a.c
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
const int waxI = 12;
// Function Prototypes

// Main Function
int main()
{
    char oil1[] = "Oil";
    char oil[] = "change";
    char tire[] = "Tire";
    char tire1[] = "rotation";
    char wash[] = "Car";
    char wash1[] = "wash";
    char wax[] = "Car";
    char wax1[] = "wax";
    char non[] = "-";
    char userJob1[50];
    char userJob2[50];
    char u1[50];
    char u2[50];
    int cost = 0;
    int cost2 = 0;


    printf("Davy's auto shop services\n\nOil change -- $35\nTire rotation -- $19\nCar wash -- $7\nCar wax -- $12\n");

    printf("Enter first service:\n");
    scanf("%s %s", userJob1, userJob2);


    printf("You entered: %s %s\n", u1, u2);
    if( strcmp(userJob1, oil1) == 0  && strcmp(userJob2, oil) == 0)
    {   
        cost = cost + oilI;
        printf("Enter second service:\n");

        scanf(" %s%s", u1, u2);

        if( strcmp(u1, non) == 0)
        {
             printf("No service\n");

        }

        else{
            if(strcmp(userJob1, wash) == 0  && strcmp(userJob2, wash1) == 0)
        {
            cost2 = cost2 + washI;
        }    
        else if( strcmp(userJob1, wax) == 0  && strcmp(userJob2, wax1) == 0)
        {
            cost2 = cost2 + waxI;
        }

        else
        {
            printf("Error: Requested service is not recognized\n");
        }
        printf("Davy's auto shop invoice\n\n");
           }
    }

    else if( strcmp(userJob1, tire) == 0  && strcmp(userJob2, tire1) == 0)
    {
        cost = cost + tireI;
        printf("Enter second service:\n");
        scanf("%s %s", userJob1, userJob2);
     
        if( strcmp(userJob1, oil) == 0  && strcmp(userJob2, oil1) == 0)
        {
            cost2 = cost2 + oilI;
        }

        else if( strcmp(userJob1, wash) == 0  && strcmp(userJob2, wash1) == 0)
        {
            cost2 = cost2 + washI;
        }    
        else if( strcmp(userJob1, wax) == 0  && strcmp(userJob2, wax1) == 0)
        {
            cost2 = cost2 + waxI;
        }
        else if( strcmp(userJob1, non) == 0)
        { 
            printf("No service");
        }
        else
        {
            printf("Error: Requested service is not recognized\n");

        }
        printf("Davy's auto shop invoice\n\n");
        printf("Service 1:%s %s, $%d\n", userJob1, userJob2, cost2);

    }
    else if( strcmp(userJob1, wash) == 0  && strcmp(userJob2, wash1) == 0)
    {
        cost = cost + washI;
        printf("Enter second service:\n");
        scanf("%s %s", userJob1, userJob2);
     
        if( strcmp(userJob1, tire) == 0  && strcmp(userJob2, tire1) == 0)
        {
            cost2 = cost2 + tireI;
        }

        else if( strcmp(userJob1, oil) == 0  && strcmp(userJob2, oil1) == 0)
        {
            cost2 = cost2 + oilI;
        }
        else if( strcmp(userJob1, wax) == 0  && strcmp(userJob2, wax1) == 0)
        {
            cost2 = cost2 + waxI;
        }
        else if( strcmp(userJob1, non) == 0)
        { 
            printf("No service\n");
        }
        else
        {
            printf("Error: Requested service is not recognized\n");

        }
        printf("Davy's auto shop invoice\n\n");
        printf("Service 1:%s %s, $%d\n", userJob1, userJob2, cost2);

    }
    else if( strcmp(userJob1, wax) == 0  && strcmp(userJob2, wax1) == 0)
    {
        cost = cost + tireI;
        printf("Enter second service:\n");
        scanf("%s %s", userJob1, userJob2);
        
        if( strcmp(userJob1, tire) == 0  && strcmp(userJob2, tire1) == 0)
        {
            cost2 = cost2 + tireI;
        }

        else if( strcmp(userJob1, wash) == 0  && strcmp(userJob2, wash1) == 0)
        {
            cost2 = cost2 + washI;
        }
        else if( strcmp(userJob1, oil) == 0  && strcmp(userJob2, oil1) == 0)
        {
            cost2 = cost2 + oilI;
        }  
        else if( strcmp(u1, non) == 0)
        { 
            printf("No service\n");
        }

        else
        {
            printf("Error: Requested service is not recognized\n");

        }
        printf("Davy's auto shop invoice\n\n");
    }

    else
    {
        printf("Error: Requested service is not recognized\n");
    }
    printf("Davy's auto shop invoice\n\n");
    printf("Service 1: %s %s, $%d\n", userJob1, userJob2, cost);
    printf("Service 2: %s %s, $%d\n\n", u1, u2, cost2);
    printf("Total: $%d\n", cost + cost2);



    return 0;
}

// Function Definitions


