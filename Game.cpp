#include <iostream>
#include <string>
#include <vector>

#include "Game.hpp"



using namespace std;

namespace coup
{   
    Game::Game()
    {

    }

    string Game::turn()
    {
        return "";
    }

    vector<string> Game::players()
    {
        vector<string> temp{"1", "2", "3", "4", "5"};
        return temp;
    }

    string Game::winner()
    {
        return "a";
    }
}