#include <stdio.h>
#include <string.h>

#define MAX_SEATS 100
#define MAX_NAME_LEN 50

typedef struct {
    int seatNumber;
    char passengerName[MAX_NAME_LEN];
} Reservation;

Reservation reservations[MAX_SEATS];
int bookedSeats = 0;

// Function to check if a seat is already booked
int isSeatBooked(int seatNumber) {
    for (int i = 0; i < bookedSeats; i++) {
        if (reservations[i].seatNumber == seatNumber) {
            return 1;
        }
    }
    return 0;
}

// Function to book a ticket
void bookTicket() {
    int seatNumber;
    char passengerName[MAX_NAME_LEN];
    
    if (bookedSeats >= MAX_SEATS) {
        printf("All seats are booked. No more seats available.\n");
        return;
    }

    printf("Enter seat number: ");
    scanf("%d", &seatNumber);
}