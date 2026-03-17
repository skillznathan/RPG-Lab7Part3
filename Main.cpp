#include <iostream>
#include "Player.h"
#include "Item.h"

using namespace std;

int main() {
    Player hero("Hero", 100);

    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item potion("Potion", 5);

    cout << "\n--- Adding items to hero's inventory ---" << endl;

    hero.addItem(sword);
    hero.addItem(shield);

    // Not adding potion (example requirement)

    hero.showInventory();

    cout << "\nTotal items added to inventories: "
         << Item::getTotalItems() << endl;

    return 0;
}



/*
@skillznathan ➜ /workspaces/RPG-Lab7Part2- (main) $ g++ Inventory.cpp Item.cpp Main.cpp Player.cpp -o program
@skillznathan ➜ /workspaces/RPG-Lab7Part2- (main) $ ./program
Default constructor called for Player.

--- Adding items to hero's inventory ---
An item was added: Sword
Hero found a [Sword] (Value: 10)
An item was added: Shield
Hero found a [Shield] (Value: 15)

--- Hero's Inventory ---
Inventory (2/5):
  [Sword] (Value: 10)
  [Shield] (Value: 15)

Total items added to inventories: 2
Inventory has been destroyed.
@skillznathan ➜ /workspaces/RPG-Lab7Part2- (main) $ 
*/