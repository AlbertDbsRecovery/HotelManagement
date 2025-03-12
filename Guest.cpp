#include "Guest.h"

Guest::Guest() : name(""), age(0) {}

Guest::Guest(std::string n) : name(n), age(0) {} 

std::string Guest::getName() const { 
    return name;
}
