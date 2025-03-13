# HotelManagement

# Hotel Management System

This project is a simple application for managing hotel rooms, allowing the addition of rooms, booking them, and displaying their current status.

## How to Run the Project

### 1. Compilation

Using g++, you can compile all source files as follows:

```sh
g++ Main.cpp Hotel.cpp Restaurant.cpp Room.cpp Employee.cpp Guest.cpp -o hotel_management
```

### 2. Execution

After compilation, run the executable:

```sh
./hotel_management
```

## Project Files

- **Main.cpp** - The main function, where functionalities are tested.
- **Hotel.h/.cpp** - Manages rooms and bookings.
- **Room.h/.cpp** - Defines the room class.
- **Guest.h/.cpp** - The class for guests.
- **Employee.h/.cpp** - Manages hotel employees.
- **Restaurant.h/.cpp** - Manages the hotel's restaurant menu.
