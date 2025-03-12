#include "Hotel.h"
#include <iostream>

Hotel::Hotel() {
    
}

void Hotel::addRoom(int number, double price) {
    rooms.emplace_back(number, price);
}

void Hotel::bookRoom(int roomNumber, Guest guest) {
    for (auto &room : rooms) {
        if (room.getNumber() == roomNumber) {
            room.book(guest);
            return;
        }
    }
    std::cout << "Camera nu a fost găsită!\n";
}

void Hotel::showRooms() const {
    for (const auto &room : rooms) {
        room.display();
    }
}
