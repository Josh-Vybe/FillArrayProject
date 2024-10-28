#include "Std2DArrays.h"
#include <iostream>

int main() {
    // Declare the 2D array with a fixed maximum size
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;

    int numberOfRows, numberOfColumns;

    // Get user input for the array dimensions
    std::cout << "Enter the number of rows: ";
    std::cin >> numberOfRows;

    std::cout << "Enter the number of columns: ";
    std::cin >> numberOfColumns;

    try {
        // Fill the array using SW DIAG UP method
        fillArray(arr, numberOfRows, numberOfColumns);
        
        // Print the filled array
        printArray(arr, numberOfRows, numberOfColumns);
    } 
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
