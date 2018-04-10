/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 08:58:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"
    
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);
    return;
}


    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  UpdateInfoStruct
     *  Description:  Update Values(int, doubles) from struct by some weight
     * =====================================================================================
     */

void UpdateInfoStruct(SuperDude* sd, int myweight)
{
    //
    sd->age += weight;
    sd->weight =sd ->weight * myweight;
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoAllStruct
 *  Description:  Display array of structures
 * =====================================================================================
 */
void ShowInfoAllStruct(const SuperDude sd[])
{
    for(int i = 0; i <ASIZE; i ++)
    {
        printf("[%d] Member info[%d] [%lf] [%c]\n", 
                i, sd[i].age, sd[i].weight, sd[i].sex);
    }
    return;
}
void InitInfoStruct(SuperDude* sd)
{
    //when using an address of a structure,
    //use arrows instead of dot operator.
    sd->age = -99;
    sd->weight = -99.0;
    sd->sex = 'N';
    return;
}
