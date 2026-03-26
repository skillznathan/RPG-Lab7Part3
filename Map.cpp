#include "Map.h"
#include <iostream>

Map::Map(int w, int h, Player* player)
    : width(w), height(h), playerPtr(player)
{
    // Set starting position inside the top-left wall
    playerPtr->setX(1);
    playerPtr->setY(1);

    // Allocate rows
    grid = new char*[height];
    for (int r = 0; r < height; r++) {
        grid[r] = new char[width];
        for (int c = 0; c < width; c++) {
            if (r == 0 || r == height-1 || c == 0 || c == width-1)
                grid[r][c] = '#';  // wall
            else
                grid[r][c] = '.';  // floor
        }
    }
}

Map::~Map() {
    for (int r = 0; r < height; r++)
        delete[] grid[r];
    delete[] grid;
}

void Map::draw() const {
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            if (r == playerPtr->getY() && c == playerPtr->getX())
                std::cout << '@';
            else
                std::cout << grid[r][c];
        }
        std::cout << std::endl;
    }
}

bool Map::isWall(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height)
        return true;
    return grid[y][x] == '#';
}

int Map::getWidth() const { return width; }
int Map::getHeight() const { return height; }