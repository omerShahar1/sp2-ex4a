#include <iostream>
#include <string>
#include <vector>

#include "Ambassador.hpp"

using namespace std;

namespace coup
{
    Ambassador::Ambassador(Game &game, string name) : Player(game, name, "Ambassador")
    {
        
    }

    void Ambassador::transfer(Player &player1, Player &player2)
    {

    }
    
    void Ambassador::block(Player &player)
    {

    }
}