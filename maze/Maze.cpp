#include "Maze.h"
#include <stack>
#include <cstdlib> // עבור rand()
#include <ctime>   // עבור time()
#include <algorithm> // עבור std::shuffle
#include <random>    // עבור std::default_random_engine

bool Maze::isSafe(int x, int y) {
	return (x >= 0 && x < size() && y >= 0 && y < size() && board[x][y] == CLOSE);
}

// פונקציה ליצור נתיב תקין במבוך
void Maze::createPath(int x, int y)
{
	// כיוונים: למעלה, למטה, שמאלה, ימינה
	int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
	stack<pair<int, int>> stack;
	stack.push({ x, y });
	board[x][y] = OPEN; // מסמן את התא כנחקר

	while (!stack.empty()) {
		auto current = stack.top();
		stack.pop();
		int x = current.first;
		int y = current.second;

		// ערבוב הכיוונים כדי ליצור מבוך אקראי

		std::random_device rd; // מכשיר אקראי
		std::default_random_engine engine(rd());
		std::shuffle(&dir[0], &dir[4], engine); // ערבוב הכיוונים

		for (int i = 0; i < 4; ++i) {
			int newX = x + dir[i][0] * 2;
			int newY = y + dir[i][1] * 2;

			if (isSafe(newX, newY)) {
				board[newX][newY] = OPEN; // מסמן את התא כנחקר
				board[x + dir[i][0]][y + dir[i][1]] = OPEN; // מסמן את התא שבין
				stack.push({ newX, newY });
			}
		}
	}
	board[0][0] = OPEN; // התחלה
	board[size() - 1][size() - 1] = OPEN; // סיום
}


void Maze::printMaze()
{
	system("cls");
	for (auto row : board)
	{
		for (char n : row)
			cout << n << "  ";
		cout << endl;
	}
}

vector<char>& Maze::operator[](int index)
{
	return board[index];
}


void Maze::setColAndRow(Side::Direction direction)
{
	int prevRow = currentRow, prevCol = currentCol;
	switch (direction)
	{
		case Side::Direction::DOWN:
				currentRow++;
				break;

		case Side::Direction::UP:
				currentRow--;
				break;

		case Side::Direction::LEFT:
				currentCol--;
				break;

		case Side::Direction::RIGHT:
				currentCol++;
	}

	if (currentCol < 0 || currentCol >= size()
		|| currentRow < 0 || currentRow >= size()
		|| board[currentRow][currentCol] == CLOSE)
	{
		currentRow = prevRow;
		currentCol = prevCol;
	}
}

