#include "Player.h"
#include <iostream>
using namespace std;

// Updated constructor
Player::Player(string name, int health)
    : name(name), health(health), inventory(5) // capacity = 5 (or 10 if you want)
{
    cout << "Default constructor called for Player." << endl;
}

// Show inventory
void Player::showInventory() const {
    cout << "\n--- " << name << "'s Inventory ---" << endl;
    inventory.display();
}

// Add item
void Player::addItem(const Item& item) {
    if (inventory.addItem(item)) {
        cout << name << " found a ";
        item.display();
    } else {
        cout << "Inventory is full! Could not add " << item.getName() << endl;
    }
}