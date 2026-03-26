#include "Player.h"

// Default constructor
Player::Player()
    : name("Hero"), health(100), maxHealth(100), attackPower(10),
      x(0), y(0), inventory(10) // Inventory with capacity 10
{}

// Parameterized constructor
Player::Player(std::string n, int h, int ap)
    : name(n), health(h), maxHealth(h), attackPower(ap),
      x(0), y(0), inventory(10)
{}

// Position getters/setters
int Player::getX() const { return x; }
int Player::getY() const { return y; }
void Player::setX(int newX) { x = newX; }
void Player::setY(int newY) { y = newY; }

// Stats getters
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getMaxHealth() const { return maxHealth; }
int Player::getAttackPower() const { return attackPower; }

// Inventory
void Player::addItem(const Item& item) {
    inventory.addItem(item); // match method name in Inventory class
}