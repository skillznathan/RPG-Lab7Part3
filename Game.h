#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Map.h"
#include "Item.h"

class Game {
private:
    Player player;    // must come first
    Map gameMap;      // depends on player
    bool running;

    void processInput();

public:
    Game();
    ~Game() {}
    void run();
};

#endif