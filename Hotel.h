#ifndef HOTEL_H
#define HOTEL_H

#include "Room.h"
#include "Guest.h"
#include "Employee.h"
#include "Restaurant.h"
#include <vector>

class Hotel {
private:
    std::vector<Room> rooms;
    std::vector<Employee> employees;
    Restaurant restaurant;
public:
    Hotel();
    void addRoom(int number, double price);
    void bookRoom(int roomNumber, Guest guest);
    void showRooms() const;
};

#endif 