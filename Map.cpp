#include "Map.h"

Map::Map(int w, int h, Player* p)
    : width(w), height(h), playerPtr(p)
{
    // Set player starting position
    playerPtr->setX(1);
    playerPtr->setY(1);

    // Allocate grid
    grid = new char*[height];
    for (int i = 0; i < height; i++) {
        grid[i] = new char[width];
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height-1 || j == 0 || j == width-1)
                grid[i][j] = '#';
            else
                grid[i][j] = '.';
        }
    }
}

Map::~Map() {
    for (int i = 0; i < height; i++)
        delete[] grid[i];
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
        std::cout << '\n';
    }
}

bool Map::isWall(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height)
        return true;
    return grid[y][x] == '#';
}