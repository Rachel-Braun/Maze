#include "Game.h"

Game Game::buildGame(int size)
{
	if (instance == nullptr) {
		instance = new Game(size);
	}
	return *instance;
}

bool Game::end()
{
	return maze.currentRow==maze.size()-1 && maze.currentCol == maze.size() - 1;
}

void Game::step()
{
	Side::Direction direction = Side::getDirection();
	maze[maze.currentRow][maze.currentCol] = maze.OPEN;
	maze.setColAndRow(direction);
	maze[maze.currentRow][maze.currentCol] = maze.GAMER;
	maze.printMaze();
}




