// 07_Two_dimensional_arrays/2d_array_traversal.cpp
// This program demonstrates how to traverse (iterate through) elements of a two-dimensional array (matrix) in C++.
// Nested loops are typically used for 2D array traversal.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    const int ROWS = 3; // Define constant for number of rows.
    const int COLS = 4; // Define constant for number of columns.

    // Declare and initialize a 2D integer array (3x4 matrix).
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    std::cout << "--- Traversing 2D Array (Row by Row) ---" << std::endl;

    // --- 1. Traversing using nested for loops (row-major order) ---
    // The outer loop iterates through rows, and the inner loop iterates through columns for each row.
    for (int i = 0; i < ROWS; ++i) { // Outer loop for rows (from 0 to ROWS-1)
        for (int j = 0; j < COLS; ++j) { // Inner loop for columns (from 0 to COLS-1)
            std::cout << matrix[i][j] << "\t"; // Access and print element at current row 'i' and column 'j'.
        }
        std::cout << std::endl; // Move to the next line after printing all elements of a row.
    }

    std::cout << "\n--- Traversing 2D Array (Column by Column) ---" << std::endl;

    // --- 2. Traversing using nested for loops (column-major order) ---
    // The outer loop iterates through columns, and the inner loop iterates through rows for each column.
    // This is less common for printing but useful for certain algorithms.
    for (int j = 0; j < COLS; ++j) { // Outer loop for columns
        for (int i = 0; i < ROWS; ++i) { // Inner loop for rows
            std::cout << matrix[i][j] << "\t"; // Access and print element at current row 'i' and column 'j'.
        }
        std::cout << std::endl; // Move to the next line after printing all elements of a column.
    }

    // --- 3. Traversing and calculating sum of all elements ---
    long long totalSum = 0;
    std::cout << "\n--- Calculating Sum of All Elements ---" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            totalSum += matrix[i][j];
        }
    }
    std::cout << "Sum of all elements: " << totalSum << std::endl; // Output: 78

    // --- 4. Traversing and finding the largest element ---
    int maxElement = matrix[0][0]; // Assume the first element is the maximum.
    std::cout << "\n--- Finding Largest Element ---" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    std::cout << "Largest element: " << maxElement << std::endl; // Output: 12

    // Nested loops are essential for processing data stored in two-dimensional arrays.

    return 0; // Indicate successful program execution.
}
