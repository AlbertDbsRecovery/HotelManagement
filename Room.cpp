#include "Room.h"
#include <iostream>

Room::Room(int num, double pr) : number(num), price(pr), occupied(false), guest() {}


int Room::getNumber() const {
    return number;
}

void Room::book(Guest g) {
    if (!occupied) {
        guest = g;
        occupied = true;
    }
}

void Room::display() const {
    std::cout << "Camera " << number << ": " << (occupied ? "Ocupată" : "Liberă") << "\n";
}
