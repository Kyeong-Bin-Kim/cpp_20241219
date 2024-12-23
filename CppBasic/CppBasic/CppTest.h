#pragma once

#include <iostream>
#include <vector>
#include <string>

const int Rows = 5;
const int Cols = 8;

extern std::string terrain[];

void generateMaze(std::vector<std::vector<std::string>>& maze);
void printMaze(const std::vector<std::vector<std::string>>& maze);
int getValidInput();
void movePlayer(int& currentRow, int& currentCol, int direction);
