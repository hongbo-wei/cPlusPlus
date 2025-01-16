#include "maze.h"
#include <cstdlib>
#include <ctime>

void generateMaze(int x, int y) {
    // Example maze generation logic (to be expanded later)
    maze[y][x] = 0; // Mark the starting cell as a path

    // Add simple random movement for demonstration
    if (x + 2 < WIDTH) maze[y][x + 2] = 0;
    if (y + 2 < HEIGHT) maze[y + 2][x] = 0;
}
