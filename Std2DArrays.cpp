#include "Std2DArrays.h"
#include <iostream>
#include <stdexcept>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int num = 1;

    // Start filling from bottom-left diagonally upwards
    // First handle the diagonals starting in the first column (SW corner to upper-left part)
    for (int startRow = rows - 1; startRow >= 0; --startRow) {
        int row = startRow;
        int col = 0;
        while (row < rows && col < columns) {
            arr[row][col] = num++;
            row++;
            col++;
        }
    }

    // Now handle the diagonals starting in the top row (right of the SW-to-upper-left part)
    for (int startCol = 1; startCol < columns; ++startCol) {
        int row = 0;
        int col = startCol;
        while (row < rows && col < columns) {
            arr[row][col] = num++;
            row++;
            col++;
        }
    }
}

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    // Print the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
