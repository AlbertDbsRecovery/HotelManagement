#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>

class Restaurant {
private:
    std::vector<std::string> menu;
public:
    Restaurant();
    void addDish(std::string dish);
    void showMenu() const;
};

#endif