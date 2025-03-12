#include "Restaurant.h"
#include <iostream>

Restaurant::Restaurant() {}

void Restaurant::addDish(std::string dish) {
    menu.push_back(dish);
}

void Restaurant::showMenu() const {
    for (const auto &dish : menu) {
        std::cout << dish << "\n";
    }
}
