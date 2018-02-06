/*
 * =====================================================================================
 *
 *       Filename:  ch3hw_pt2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:19 AM
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
    char oil[11];
    int oilValue = 35
    char tire[] = "Tire rotation";
    int tireValue = 19;
    printf("Davy's auto shop services
            Oil change -- $35
            Tire rotation -- $19
            Car wash -- $7
            Car wax -- $12\n"); // fix spaces
    strcpy(oil, "Oil Change");
    printf("[%s] $%d\n", oil, oilValue);
    printf("[%s] $%d\n", tire, tireValue);
    return 0;
}
// Function Definitions


