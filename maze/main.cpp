#include <conio.h>
#include <iostream>
#include <map>
#include <vector>
#include "Game.h"
#include <cstdlib> // עבור system
using namespace std;



void main()
{
	Game game =game.buildGame(10);
	game.maze.printMaze();

	while (!game.end())
		game.step();

	cout << "\nVery nice!!! :)\n";
}