/*
 * =====================================================================================
 *
 *       Filename:  testDude.c
 *
 *    Description:  Pass structure
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:56 AM
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
struct Dude
{
    int age;
    double weight;
}; // DO NOT FORGET THE SEMICOLON!!!!

typedef struct SuperDude
{
    int age;
    double weight;
}SuperDude; // DO NOT FORGET THE SEMICOLON!!!!

// Function Prototypes
void ShowInfo(int age, double weight);
// Main Function
int main()
{
    int a = 17;
    double w = 172.5;
    ShowInfo(a, w);
    struct Dude man1;
    man1.age = 32;
    man1.weight = 196.9;
    ShowInfo(man1.age, man1.weight);
    
    SuperDude man2;
    man2.age = 34;
    man2.weight = 186.9;
    ShowInfo(man2.age, man2.weight);


    return 0;
}
// Function Definitions

void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);
    return;
}

