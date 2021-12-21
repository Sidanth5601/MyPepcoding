#pragma once
#include <vector>

void LogA2d(int** a2d, int row, int col);
void rotateShell(int** arr, int s, int r, int row, int col);
std::vector<int>* fillOnedFromShell(int** arr, int s, int row, int col);
std::vector<int> rotateOnedArray ( std::vector<int>* res, int r );
void reverseOnedArray( std::vector<int>* vec );
void fillShellFromOned(int** arr, int s, int row, int col,  std::vector<int>* rotated );


