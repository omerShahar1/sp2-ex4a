#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include <string>

#include "Game.hpp"


using namespace std;

namespace coup
{
    class Player
    {
        private:
            string player_name;
            int total_coins;
            string role_name;
            Game game;
            
        public:
            Player(Game &game, string, string);
            void income();
            void foreign_aid();
            void coup(Player &player);
            string role();
            int coins();
            
            void add_coins(int);
            void sub_coins(int);
            string get_name();
    };
}

#endif