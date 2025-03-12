#include "Employee.h"
#include <iostream>

Employee::Employee(std::string n, std::string p) : name(n), position(p) {}

void Employee::display() const {
    std::cout << "Angajat: " << name << " - " << position << "\n";
}