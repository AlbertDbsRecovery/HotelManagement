#ifndef ROOM_H
#define ROOM_H

#include "Guest.h"

class Room {
private:
    int number;
    double price;
    bool occupied;
    Guest guest;
public:
    Room(int num, double pr);
    int getNumber() const;
    void book(Guest g);
    void display() const;
};

#endif