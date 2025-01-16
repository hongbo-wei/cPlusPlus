#include "maze.h"
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed random number generator

    initializeMaze();
    generateMaze(1, 1); // Start generating the maze
    displayMaze();

    return 0;
}
