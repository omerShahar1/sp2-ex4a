#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

namespace coup
{
    class Game
    {
        private:
            map<string, int> players_list;
            string player_turn;
            bool active;

        public:
            Game();
            string turn();
            vector<string> players();
            string winner();
    };
}

#endif