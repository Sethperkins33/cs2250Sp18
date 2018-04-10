/*
 * =====================================================================================
 *
 *       Filename:  Seat.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:30:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Seat.h"
#include <string.h>
#include <stdbool.h>

typedef struct Seat_struct {
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

/*** Functions for Seat ***/

void SeatMakeEmpty(Seat* seat) {
    strcpy((*seat).firstName, "empty");
    strcpy((*seat).lastName,  "empty");
    (*seat).amountPaid = 0;

    return;
}

bool SeatIsEmpty(Seat seat) {
    return (strcmp(seat.firstName, "empty") == 0);
}

void SeatPrint(Seat seat) {
    printf("%s ", seat.firstName);
    printf("%s, ", seat.lastName);
    printf("Paid: %d\n", seat.amountPaid);

    return;
}
/*** End functions for Seat ***/

/*** Functions for array of Seat ***/
void SeatsMakeEmpty(Seat seats[], int numSeats) {
    int i = 0;

    for (i = 0; i < numSeats; ++i) {
        SeatMakeEmpty(&seats[i]);
    }

    return;
}

void SeatsPrint(Seat seats[], int numSeats) {
    int i = 0;

    for (i = 0; i < numSeats; ++i) {
        printf("%d: ", i);
        SeatPrint(seats[i]);
    }

    return;
}
