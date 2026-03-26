#ifndef MAP_H
#define MAP_H

#include "Player.h"
#include <iostream>

class Map {
private:
    char** grid;
    int width;
    int height;
    Player* playerPtr;

public:
    Map(int w, int h, Player* p);
    ~Map();

    void draw() const;
    bool isWall(int x, int y) const;

    int getWidth() const { return width; }
    int getHeight() const { return height; }
};

#endif