/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:49 AM
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
    int age;
    int temp;

    printf("How old are you?\n");
    scanf("%d", &age);


    printf("you are %d years old\n", age);
    if(age >= 18)
    {
        printf("You can vote\n");
    }
    else 
    { 
        temp = 18 - age;
        printf("you will have %d years to vote\n", temp);
    }
    if(age >= 21)
    {
        printf("You can drink\n");
    }
    else 
    { 
        temp = 21 - age;
        printf("you will have %d years to drink\n", temp);
    }
    if(age >= 65)
    {
        printf("You can retire\n");
                }
    else 
    { 
        temp = 65 - age;
        printf("you will have %d years to retire\n", temp);
    }
    if (age == 350)
            {
            printf("You are at your prime and livin' it up! Enjoy life and be happy");

            }
    else if(age > 35)
    {
    temp = age - 35;
    printf("You are %d years past 35\n", temp);
    }
    printf("Adios amigo\n");

                return 0;
                }
// Function Definitions


