// Prevents multiple inclusions of the same header file, which could cause redefinition errors.
#ifndef MAZE_H
#define MAZE_H

#include <vector>

// Constants for the maze size
const int WIDTH = 20;
const int HEIGHT = 10;

// Shared maze grid
extern std::vector< std::vector<int> > maze;

// Function declarations
void initializeMaze();
void generateMaze(int x, int y);
void displayMaze();

#endif
