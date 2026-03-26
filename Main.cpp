#include "Game.h"
#include <iostream>

int main() {
    try {
        Game game;
        game.run();
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}



/*
@skillznathan ➜ /workspaces/RPG-Lab7Part2- (main) $ g++ Main.cpp Game.cpp Player.cpp Map.cpp Inventory.cpp Item.cpp -o program
@skillznathan ➜ /workspaces/RPG-Lab7Part2- (main) $ ./program
An item was added: Sword
An item was added: Shield
Welcome to the RPG Game!


Player: Hero HP: 100 Position: (1, 1)
##########
#@.......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): WASD


Player: Hero HP: 100 Position: (1, 1)
##########
#@.......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (1, 1)
##########
#@.......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (1, 2)
##########
#........#
#@.......#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (2, 2)
##########
#........#
#.@......#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): WASD


Player: Hero HP: 100 Position: (2, 1)
##########
#.@......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (1, 1)
##########
#@.......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (1, 2)
##########
#........#
#@.......#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (2, 2)
##########
#........#
#.@......#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): WASD


Player: Hero HP: 100 Position: (2, 1)
##########
#.@......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (1, 1)
##########
#@.......#
#........#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (1, 2)
##########
#........#
#@.......#
#........#
#........#
#........#
#........#
##########
Enter command (WASD to move, Q to quit): 

Player: Hero HP: 100 Position: (2, 2)
##########
#........#
#.@......#
#........#
#........#
#........#
#........#
##########

*/