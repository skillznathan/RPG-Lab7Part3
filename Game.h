#pragma once
#include "Player.h"
#include "Map.h"
#include "Item.h"

class Game {
private:
    Player player;  // Must be before gameMap
    Map gameMap;
    bool running;

    void processInput();

public:
    Game();
    ~Game();
    void run();
    const Player& getPlayer() const;
};