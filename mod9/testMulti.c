/*
 * =====================================================================================
 *
 *       Filename:  testMulti.c
 *
 *    Description:  multiple tasks
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


// Main Function
int main()
{
    SuperDude s1, s2;
    SuperDude ss[ASIZE]; // array of structs
    // THe & operator gives you the address
    InitInfoStruct(&s1); // init struct info
    ShowInfoStruct(&s1); // display struct info
    s2 = CopyInfoStruct(&s1);
    SHowInfoStruct(&s2); // display struct info
    // initialize your array of structs
    printf("\n\nNow array info\n");
    for(int i = 0; i < ASIZE; i++)
    {

        InitInfoStruct(&ss[i]);
        UpdateInfoStruct(&ss[i], i * 10); // Update info
        //ShowInfoStruct(&ss[i]); //display struct info
    }
    // Diplay all members of array using one function
    ShowInfoAllStruct(ss);
    return;
}


