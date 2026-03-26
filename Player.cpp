#include "Player.h"
#include <iostream>

Player::Player() : name("Hero"), health(100), maxHealth(100), attackPower(10), x(0), y(0) {}

Player::Player(std::string n, int h, int ap)
    : name(n), health(h), maxHealth(h), attackPower(ap), x(0), y(0) {}

Player::~Player() {}

void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

void Player::displayStatus() const {
    std::cout << name << " HP: " << health << "/" << maxHealth << std::endl;
}

void Player::showInventory() const {
    inventory.display();
}

void Player::addItem(const Item& item) {
    inventory.add(item);
}

// Getters
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getMaxHealth() const { return maxHealth; }
int Player::getAttackPower() const { return attackPower; }

// Position
int Player::getX() const { return x; }
int Player::getY() const { return y; }
void Player::setX(int newX) { x = newX; }
void Player::setY(int newY) { y = newY; }