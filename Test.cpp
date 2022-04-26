#include <iostream>
#include <stdexcept>

#include <vector>

#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "doctest.h"

using namespace coup;
using namespace std;

TEST_CASE("game::turn, players::income and player::foreign_aid")
{
    Game game{};

	Duke duke{game, "player1"};
	Assassin assassin{game, "player2"};
	Ambassador ambassador{game, "player3"};
	Captain captain{game, "player4"};
	Contessa contessa{game, "player5"};

    string str = game.turn();
    CHECK_EQ(str.compare("player1"),0);
    CHECK_EQ(duke.coins(), 0);
    CHECK_NOTHROW(duke.income());
    CHECK_EQ(duke.coins(), 1);
    str = game.turn();
    CHECK_EQ(str.compare("player2"), 0);
    CHECK_EQ(assassin.coins(), 0);
    CHECK_NOTHROW(assassin.income());
    CHECK_EQ(assassin.coins(), 1);


}

TEST_CASE("game::players")
{
    Game game{};

	Duke duke{game, "1"};
	Assassin assassin{game, "2"};
	Ambassador ambassador{game, "3"};
	Captain captain{game, "4"};
	Contessa contessa{game, "5"};


    vector<string> a{"1", "2", "3", "4", "5"};
    vector<string> b = game.players();
    size_t i=0;

    for(i=0; i<5; i++)
    {
        CHECK_EQ(a[i].compare(b[i]),0);
    }
}

TEST_CASE("winner")
{
    Game game{};
	Duke a{game, "avi"};
	Assassin b{game, "alon"};
    CHECK_THROWS(game.winner());

    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_NOTHROW(a.income());
    CHECK_THROWS(a.income());


    CHECK_NOTHROW(a.coup(b));
    CHECK_NOTHROW(game.winner());



}

