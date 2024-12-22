#pragma once
#include <map>
#include <vector>
#include <conio.h>
using namespace std;

class Side
{
	public:
		typedef enum { DOWN, RIGHT, UP, LEFT } Direction;
		static Direction getDirection()
		{
			map<int, Direction> directions;
			directions[80] = DOWN;
			directions[77] = RIGHT;
			directions[72] = UP;
			directions[75] = LEFT;
			Direction res;
			char ch;
			do
			{
				ch = _getch();
				if (directions.count(ch) > 0)
					return directions[ch];
			} while (true);
		}
};

