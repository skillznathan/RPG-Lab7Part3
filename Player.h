#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"
#include "Item.h"

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;
    Inventory inventory;
    int x; // horizontal position (column)
    int y; // vertical position (row)

public:
    // Constructors
    Player(); // default
    Player(std::string n, int h, int ap);

    // Position getters and setters
    int getX() const;
    int getY() const;
    void setX(int newX);
    void setY(int newY);

    // Stats getters
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    // Inventory
    void addItem(const Item& item);
};

#endif