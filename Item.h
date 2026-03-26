#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    static int totalItems;
    string name;
    int value;

public:
    Item(string name = "Scrap", int value = 0);

    static int getTotalItems();
    static void incrementTotalItems();

    string getName() const;
    int getValue() const;

    void display() const;
};

#endif

