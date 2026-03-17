#include "Item.h"

// Initialize static member
int Item::totalItems = 0;

// Constructor
Item::Item(string name, int value)
    : name(name), value(value)
{
}

// Static functions
int Item::getTotalItems() {
    return totalItems;
}

void Item::incrementTotalItems() {
    totalItems++;
}

// Getters
string Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}

// Display
void Item::display() const {
    cout << "[" << name << "] (Value: " << value << ")" << endl;
}