#include "Game.h"
#include <iostream>
#include <cctype> // for toupper

Game::Game()
    : player("Hero", 100, 10),
      gameMap(10, 8, &player), // small map for testing
      running(true)
{
    player.addItem(Item("Sword", 10));
    player.addItem(Item("Shield", 5));

    std::cout << "Welcome to the RPG Game!\n";
}

void Game::run() {
    while (running) {
        std::cout << "\n\n";
        std::cout << "Player: " << player.getName()
                  << " HP: " << player.getHealth()
                  << " Position: (" << player.getX() << ", " << player.getY() << ")\n";
        gameMap.draw();
        processInput();
    }
    std::cout << "Thanks for playing!\n";
}

void Game::processInput() {
    char input;
    std::cout << "Enter command (WASD to move, Q to quit): ";
    std::cin >> input;
    input = toupper(input);

    int newX = player.getX();
    int newY = player.getY();

    if (input == 'W') newY--;
    else if (input == 'S') newY++;
    else if (input == 'A') newX--;
    else if (input == 'D') newX++;
    else if (input == 'Q') { running = false; return; }

    if (!gameMap.isWall(newX, newY)) {
        player.setX(newX);
        player.setY(newY);
    }
}