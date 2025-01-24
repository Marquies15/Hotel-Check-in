//============================================================================
// Name        : Final.cpp
// Author      : Marquies
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int ROOMS = 100; // Maximum number of rooms
int roomArray[ROOMS] = {0}; // 0 means available, 1 means occupied

void printHotelRoom();
void timeSlot();
bool checkAvailability(int roomNumber);

int main() {
    while (true){
    	printHotelRoom();}
    return 0;
}

void printHotelRoom() {
    cout << "Welcome to the MRG Hotel! We are happy you chose us today." << endl;

    string name;
    int roomNumber;

    cout << "Please enter your full name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Please enter a room number (1-100): ";
    cin >> roomNumber;


    while (roomNumber < 1 || roomNumber > 100) {
        cout << "Invalid room number. Please enter a valid room number (1-100): ";
        cin >> roomNumber;
    }

    if (checkAvailability(roomNumber)) {
        cout << "Room number " << roomNumber << " is already occupied. Please try again.\n";
    } else {
        // Assign the room
        roomArray[roomNumber - 1] = 1;
        cout << "Thank you, " << name << ". Room " << roomNumber << " has been booked for you." << endl;
    }

    timeSlot();
    cout<<"Thank you for booking with us at the MRG hotel. Too make a new booking please enter 1, to edit or cancel your booking please enter 2.";
  int newbooking;
    cin>> newbooking;
    if ( newbooking==1){

    	void resetBooking();
   }
    else{ cout << "Enter the room number to clear: ";
    int roomToClear;
    cin >> roomToClear;

    clearBooking(roomToClear);
}
}
bool checkAvailability(int roomNumber) {

    return roomArray[roomNumber - 1] == 1;
}

void timeSlot() {
    string timeArrival, dayArrival, timeDeparture, dayDeparture;

    cout << "Please enter your time and day of arrival (e.g., 2:00PM Monday): ";
    cin >> timeArrival >> dayArrival;

    cout << "Please enter your time and day of departure (e.g., 10:00AM Wednesday): ";
    cin >> timeDeparture >> dayDeparture;

    cout << "You will arrive at " << timeArrival << " on " << dayArrival
         << " and leave at " << timeDeparture << " on " << dayDeparture << "." << endl;
}


void resetBooking() {
    cout << "\nStarting a new booking for the next user..." << endl;
}void clearBooking(int roomNumber) {

	if (roomArray[roomNumber - 1] == 1) {
        roomArray[roomNumber - 1] = 0;
        cout << "Room number " << roomNumber << " has been cleared and is now available." << endl;
    } else {
        cout << "Room number " << roomNumber << " is already available." << endl;
    }
}
//
//
//
//
//
//
//}
