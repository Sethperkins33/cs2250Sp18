/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  check size of varibles
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:01:31 AM
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
    int num = 1;
    unsigned int unum = 1;
    num = num * 10000;
    unum = unum * 10000;
    //returns the size of the variable in bytes
    printf("The sizeof int is %ld\n", sizeof(num));
    printf("The sizeof uint is %ld\n", sizeof(unum));
    printf("num = [%d], unum = [%u]\n", num, unum);
    num *= 10000;
    printf("num = [%d]\n", num);
    num *= 10000;
    unum *= 10000;
    // find the range of integer
    //2^32 = 4294000000 i combinations
    //Range: -(i/2) ti + (i/2 -1)
    printf("num = [%d], unum = [%u]\n", num, unum);
    return 0;
}
// Function Definitions


