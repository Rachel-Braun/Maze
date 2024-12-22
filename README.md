
# Maze Game Project in C++

This is a simple C++ project that simulates a maze game in the console. The user can navigate through the maze using arrow keys.

## Game Description

In this game, the user starts at a specific point in the maze and the objective is to navigate through the maze to reach the exit. The maze is displayed in the console, where each cell in the maze is represented by a character. The user can use the arrow keys to move through the maze. Each arrow key corresponds to a specific direction:

- Up Arrow – Move up
- Down Arrow – Move down
- Left Arrow – Move left
- Right Arrow – Move right

The maze is designed such that it is surrounded by walls (represented by blocked characters), and the goal is to find the way out.

## Requirements

To run the project, you need the following:

- Operating System: Windows / Linux / macOS
- C++ Compiler (such as g++ or Visual Studio)

## Installation and Running the Game

1. **Clone the repository:**
   ```bash
   git clone <project URL>
   ```

2. **Compile the code:**
   If you're using g++, use the following command:
   ```bash
   g++ -o maze maze.cpp
   ```

3. **Run the game:**
   ```bash
   ./maze
   ```

The game will open in the console, and you can immediately start navigating through the maze using the arrow keys.

## Code Explanation

The maze is represented by a 2D array, where each cell can be one of the following:

- `#` – Wall (cannot pass through)
- `.` – Open path (can pass through)
- `S` – Start (the player's starting position)
- `E` – Exit (the goal the player needs to reach)

The player can move in different directions, as long as the destination cell is an open path.

## Features

- Navigation using arrow keys.
- Maze display in the console.
- Real-time position updates.

## Contributing

If you would like to contribute to the project, feel free to submit a Pull Request with fixes or new features. Please ensure that you test your code before submitting it!

## License

The code is licensed under the MIT License. You can use, modify, and distribute it, as long as you give appropriate credit to the author.

