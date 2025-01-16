#include "maze.h"

std::vector<std::vector<int> > maze; // Define the shared maze grid

void initializeMaze() {
    // Initialize the maze as a 2D grid of size HEIGHT x WIDTH, where each cell is set to 1 (representing a wall).
    // Explanation:
    // 1. std::vector<std::vector<int>> creates a 2D vector (a vector of vectors) to represent the grid.
    // 2. The outer vector has HEIGHT rows, and each row is a vector of WIDTH columns.
    // 3. std::vector<int>(WIDTH, 1) initializes each row with WIDTH elements, all set to 1.
    // 4. Thus, maze is a grid where every cell is initially a wall, ready to be carved into paths.
    maze = std::vector< std::vector<int> >(HEIGHT, std::vector<int>(WIDTH, 1));
}
