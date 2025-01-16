#include "maze.h"
#include <iostream>

void displayMaze() {
    for (const auto& row : maze) {
        for (int cell : row) {
            std::cout << (cell == 1 ? "#" : " ");
        }
        std::cout << "\n";
    }
}
