#include "Hotel.h"
#include <iostream>

int main() {
    Hotel h;

    h.addRoom(101, 150.0);
    h.addRoom(102, 200.0);
    h.addRoom(103, 250.0);
    h.addRoom(104, 300.0);

    Guest g1("Albert Dobos");
    Guest g2("Andrei Toma");
    Guest g3("Victor George");

    h.bookRoom(101, g1);
    h.bookRoom(102, g2);
    h.bookRoom(103, g3);

    std::cout << "\nStarea camerelor după rezervări:\n";
    h.showRooms();

    std::cout << "\nÎncercăm să rezervăm camera 101 din nou:\n";
    Guest g4("Elena Georgescu");
    h.bookRoom(101, g4); 

    std::cout << "\nStarea finală a camerelor:\n";
    h.showRooms();

    return 0;
}
