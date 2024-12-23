#include "CppTest.h"
#include <cstdlib>
#include <ctime>
#include <limits>
#include <iomanip>

std::string terrain[] = { "Gravel Road", "Mountain", "Desert", "Waterside", "Flat Ground" };

void generateMaze(std::vector<std::vector<std::string>>& maze) {
    std::srand(std::time(0));
    maze.resize(Rows, std::vector<std::string>(Cols));

    maze[0][0] = "Start";
    maze[Rows - 1][Cols - 1] = "Goal Point";

    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Cols; ++j) {
            if ((i == 0 && j == 0) || (i == Rows - 1 && j == Cols - 1)) continue;
            maze[i][j] = terrain[std::rand() % 5];
        }
    }
}

void printMaze(const std::vector<std::vector<std::string>>& maze) {
    size_t maxCellLength = 0;
    for (const auto& row : maze) {
        for (const auto& cell : row) {
            size_t cellLength = cell.length() + 2;
            if (cellLength > maxCellLength) {
                maxCellLength = cellLength;
            }
        }
    }

    for (const auto& row : maze) {
        for (const auto& cell : row) {
            std::string formattedCell = "[" + cell + "]";
            std::cout << std::setw(maxCellLength) << std::left << formattedCell;
        }
        std::cout << "\n";
    }
}

int getValidInput() {
    int input;
    while (true) {
        std::cout << "Enter a number : ";
        std::cin >> input;

        if (std::cin.fail() || input < 1 || input > 4) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
        }
        else {
            break;
        }
    }
    return input;
}

void movePlayer(int& currentRow, int& currentCol, int direction) {
    currentCol += direction;

    if (currentCol >= Cols) {
        currentCol = 0;
        currentRow += 1;
    }

    if (currentRow >= Rows) {
        currentRow = Rows - 1;
        currentCol = Cols - 1;
    }
}
