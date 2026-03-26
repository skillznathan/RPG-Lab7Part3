#include "Game.h"
#include <iostream>
#include <cctype>

Game::Game()
    : player("Hero", 100, 10),
      gameMap(30, 15, &player),
      running(true)
{
    player.addItem(Item("Sword", 10));
    player.addItem(Item("Shield", 5));
    std::cout << "Welcome to the game!\n";
}

Game::~Game() {}

void Game::processInput() {
    char input;
    std::cin >> input;
    input = std::toupper(input);

    int newX = player.getX();
    int newY = player.getY();

    if (input == 'Q') {
        running = false;
        return;
    }
    if (input == 'W') newY--;
    else if (input == 'S') newY++;
    else if (input == 'A') newX--;
    else if (input == 'D') newX++;

    if (!gameMap.isWall(newX, newY)) {
        player.setX(newX);
        player.setY(newY);
    }
}

void Game::run() {
    while (running) {
        system("clear"); // Optional: clear terminal on Unix; for Windows use "cls"
        std::cout << "=== Dungeon Explorer ===\n";
        gameMap.draw();
        player.displayStatus();
        std::cout << "Position: (" << player.getX() << ", " << player.getY() << ")\n";
        std::cout << "Move with WASD, Q to quit: ";
        processInput();
    }
}

const Player& Game::getPlayer() const { return player; }