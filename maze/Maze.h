#pragma once

#include <conio.h>
#include <iostream>
#include <map>
#include <vector>
#include <cstdlib> 
#include "Side.h"
using namespace std;

class Maze
{
    public:
        char GAMER = '*';
        char OPEN = 'O';
        char CLOSE = '@';

        vector<vector<char>>board;
        int currentRow = 0;
        int currentCol = 0;
        
        void createPath(int x, int y);
        bool isSafe(int x, int y);
        void setColAndRow(Side::Direction direction);
        void printMaze();
        int size()
        {
            return board.size();
        }

        vector<char>& operator[](int index);
        Maze(int size = 10)
        {
            board.resize(size, vector<char>(size));
            for (auto& row : board)
            {
                for (char& n : row)
                    n = CLOSE;
            }
            createPath(0, 0);
        }
};

