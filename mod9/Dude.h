/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 08:48:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; // DO NOT forget the ;

// Constants
// #define ASIZE 3
static const int ASIZE = 3;

// Function Prototypes
void ShowInfo(int age, double weight);
// Pass a const address instead of the value
// it is READ only. You cannot modify the values
void ShowInfoStruct(const SuperDude* sd);
void InitInfoStruct(SuperDude* sd); // address of SuperDude type
SuperDude CopyInfoStruct(const SuperDude* sd);
void ShowInfo(int age, double weight);
void ShowInfo( SuperDude sd);
#endif 
