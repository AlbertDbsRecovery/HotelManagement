#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    std::string position;
public:
    Employee(std::string n, std::string p);
    void display() const;
};

#endif