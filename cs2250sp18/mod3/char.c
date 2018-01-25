/*
 * =====================================================================================
 *
 *       Filename:  char.c
 *
 *    Description:  practice characters
 *
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:23 AM
 *       Revision:  none
 *       Compiler:  gcc char.c -o char
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
    char input, dummy;
    int age;
    printf("Do you like code?:");
    scanf("%c", &input);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is %d", age);
    printf("1)You entered: [%c]\n", input);
    printf("Do you really like code?:");
    scanf("%c %c", &dummy, &input);
    printf("2)You entered: [%c]\n", input);
    printf("Do you like code?:");
    scanf("%c %c", &dummy, &input);
    printf("3)You entered: [%c]\n", input);
    

    return 0;
}
// Function Definitions


