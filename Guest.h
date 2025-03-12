#ifndef GUEST_H
#define GUEST_H

#include <string>

class Guest {
public:
    Guest(); // Constructor implicit
    Guest(std::string n); // Declarăm constructorul cu parametru
    
    std::string getName() const; // Declarăm getName()

private:
    std::string name;
    int age;
};


#endif