#include "Inventory.h"

class Player {
private:
    string name;
    int health;
    Inventory inventory;

public:
    Player(string name, int health);

    void showInventory() const;
    void addItem(const Item& item);
};