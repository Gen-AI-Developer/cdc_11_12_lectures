// 07_Two_dimensional_arrays/2d_array_declaration_initialization.cpp
// This program demonstrates the declaration, initialization, and basic access of two-dimensional arrays (matrices) in C++.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. 2D Array Declaration ---
    // Syntax: dataType arrayName[rows][columns];
    // Both rows and columns must be constant integer expressions.
    int matrix[3][4]; // Declares a 2D integer array named 'matrix' with 3 rows and 4 columns.
                      // Total elements: 3 * 4 = 12. Elements are not initialized (garbage values).

    // --- 2. 2D Array Initialization ---

    // a) Initialization at declaration with an initializer list.
    // The number of rows can be omitted, but the number of columns must be specified.
    int scores[2][3] = { {10, 20, 30}, // Row 0
                         {40, 50, 60}  // Row 1
                       }; // A 2x3 matrix.

    // b) Initialization with omitted row size (compiler deduces).
    int data[][2] = { {1, 2},
                      {3, 4},
                      {5, 6} }; // A 3x2 matrix.

    // c) Partial initialization: Remaining elements are initialized to zero.
    int partialMatrix[2][3] = { {1, 2}, {3} }; 
    // partialMatrix[0][0]=1, partialMatrix[0][1]=2, partialMatrix[0][2]=0
    // partialMatrix[1][0]=3, partialMatrix[1][1]=0, partialMatrix[1][2]=0

    // d) Initializing all elements to zero.
    int zeroMatrix[2][2] = {}; // All elements will be 0.

    // --- 3. Accessing 2D Array Elements ---
    // Elements are accessed using two indices: arrayName[rowIndex][columnIndex]. Both start from 0.

    std::cout << "\n--- Accessing elements of 'scores' matrix ---" << std::endl;
    std::cout << "scores[0][0]: " << scores[0][0] << std::endl; // Output: 10
    std::cout << "scores[1][2]: " << scores[1][2] << std::endl; // Output: 60

    // --- 4. Modifying 2D Array Elements ---
    // Elements can be modified by assigning a new value to a specific index.
    std::cout << "\n--- Modifying elements of 'scores' matrix ---" << std::endl;
    std::cout << "Original scores[0][1]: " << scores[0][1] << std::endl; // Output: 20
    scores[0][1] = 25; // Change the element at row 0, column 1.
    std::cout << "Modified scores[0][1]: " << scores[0][1] << std::endl; // Output: 25

    // --- 5. Inputting values into a 2D array ---
    const int ROWS = 2;
    const int COLS = 3;
    int userInputMatrix[ROWS][COLS];

    std::cout << "\n--- Inputting values into a " << ROWS << "x" << COLS << " matrix ---" << std::endl;
    for (int i = 0; i < ROWS; ++i) { // Outer loop for rows.
        for (int j = 0; j < COLS; ++j) { // Inner loop for columns.
            std::cout << "Enter element at [" << i << "][" << j << "]: ";
            std::cin >> userInputMatrix[i][j]; // Read input into each element.
        }
    }

    std::cout << "\nYour entered matrix is:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << userInputMatrix[i][j] << "\t"; // Print with tab spacing.
        }
        std::cout << std::endl; // Newline after each row.
    }

    // Important: Like 1D arrays, C++ does not perform bounds checking on 2D arrays.
    // Accessing elements outside declared bounds leads to undefined behavior.

    return 0; // Indicate successful program execution.
}
