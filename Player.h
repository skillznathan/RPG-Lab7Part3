#pragma once
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
    int x;  // column
    int y;  // row

public:
    // Constructors / Destructor
    Player();
    Player(std::string name, int health, int attackPower);
    ~Player();

    // Player actions
    void takeDamage(int damage);
    void displayStatus() const;
    void showInventory() const;
    void addItem(const Item& item);

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    // Position getters/setters
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
};