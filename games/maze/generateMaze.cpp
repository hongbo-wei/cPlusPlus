#include "maze.h"
#include <cstdlib>
#include <ctime>
#include <vector>

void generateMaze(int x, int y) {
    // Mark the current cell as part of the path (0 represents a path)
    maze[y][x] = 0;

    // Randomly shuffle the directions to explore
    std::vector<std::pair<int, int>> directions = {
        {0, 1},  // Right
        {1, 0},  // Down
        {0, -1}, // Left
        {-1, 0}  // Up
    };

    // Shuffle the directions for randomness
    std::random_shuffle(directions.begin(), directions.end());

    // Explore each direction
    for (auto& dir : directions) {
        int newX = x + dir.first * 2;
        int newY = y + dir.second * 2;

        // Check if the new position is within bounds and hasn't been visited
        if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT && maze[newY][newX] == 1) {
            // Carve the path between the current and new cell
            maze[y + dir.second][x + dir.first] = 0;
            // Recursively generate the maze from the new cell
            generateMaze(newX, newY);
        }
    }
}
