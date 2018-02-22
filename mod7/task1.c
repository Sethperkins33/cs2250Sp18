/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take 2 numbers (floats) from the user
 *                  Define the following functions:
 *                  1) TheSum: Returns the (int) sum of the 2 numbers
 *                  2) TheProd: Returns the (double) product of the 2 numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:07 AM
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
char Menu(void);
int TheSum(double n1, double n2);
double TheProd(double n1, double n2);

// Main Function
int main()
{
    char input;
    double n1;
    double n2;
    int sum;
    double prod;
    
    printf("Please enter a number\n");
    scanf("%lf", &n1);
    printf("Please enter a number\n");
    scanf("%lf", &n2);

    sum = TheSum(n1, n2);
    prod = TheProd(n1, n2);

    input = Menu();
    switch(input)
    {
    case 's':
        printf("The sum of %lf and %lf is %d\n", n1, n2, sum);
        break;
    case 'p':
        printf("The  of prod %lf and %lf is %lf\n", n1, n2, prod);
        break;
    default:
        printf("Invalid entry\n");
    }
    return 0;
}
// Function Definitions

//if user enters s
//do sum
//if user enters p
//do product
char Menu(void)
{
    char in = 'n';
    printf("What operation would you like to perfrom?\n");
    printf("\t s) TheSum\n \t p) TheProd\n");
    scanf(" %c", &in);
 return in;
}
//Func TheSum
//Return the sum of 2 numbers
int TheSum(double n1, double n2)
{
    return (int)(n1 + n2);
}

//Func TheProd
//Return the product of 2 numbers
double TheProd(double n1, double n2)
{
    return n1 * n2;
}

