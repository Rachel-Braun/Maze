#pragma once
#include "Maze.h"
#include "Side.h"
#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
using namespace std;

class Game
{
private:
	 Game* instance;
	
	Game(int size=10)
	{
		maze = *(new Maze(size));
		maze.board[0][0] = maze.GAMER;
	}


public:
	Maze maze;
	 Game buildGame(int size=10);
	bool end();
	void step();
};

