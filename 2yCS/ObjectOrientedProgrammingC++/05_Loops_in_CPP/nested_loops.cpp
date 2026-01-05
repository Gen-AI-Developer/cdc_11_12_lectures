// 05_Loops_in_CPP/nested_loops.cpp
// This program demonstrates nested loops in C++.
// A nested loop is a loop inside another loop. The inner loop executes completely for each iteration of the outer loop.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. Nested for loops: Printing a rectangle of asterisks ---
    int rows = 3; // Number of rows for the rectangle.
    int cols = 5; // Number of columns for the rectangle.

    std::cout << "\n--- Rectangle of Asterisks (" << rows << "x" << cols << ") ---" << std::endl;
    for (int i = 0; i < rows; ++i) { // Outer loop for rows.
        for (int j = 0; j < cols; ++j) { // Inner loop for columns.
            std::cout << "* "; // Print an asterisk and a space.
        }
        std::cout << std::endl; // Move to the next line after each row is printed.
    }

    // --- 2. Nested for loops: Printing a right-angled triangle pattern ---
    int triangleHeight = 5;
    std::cout << "\n--- Right-angled Triangle Pattern (Height " << triangleHeight << ") ---" << std::endl;
    for (int i = 1; i <= triangleHeight; ++i) { // Outer loop for rows (1 to height).
        for (int j = 1; j <= i; ++j) { // Inner loop for columns (1 to current row number).
            std::cout << j << " "; // Print the column number.
        }
        std::cout << std::endl;
    }

    // --- 3. Nested while loops: Simple multiplication table (e.g., 1 to 3) ---
    int i = 1;
    std::cout << "\n--- Multiplication Table (1-3) ---" << std::endl;
    while (i <= 3) { // Outer loop for multiplicand.
        int j = 1; // Initialize inner loop counter inside the outer loop.
        while (j <= 3) { // Inner loop for multiplier.
            std::cout << i << " * " << j << " = " << (i * j) << "\t"; // \t for tab spacing.
            j++;
        }
        std::cout << std::endl; // Newline after each row of the table.
        i++;
    }

    // --- 4. Nested loops with different types (e.g., for and while) ---
    std::cout << "\n--- Mixed Nested Loops ---" << std::endl;
    for (int outer = 1; outer <= 2; ++outer) {
        std::cout << "Outer loop iteration: " << outer << std::endl;
        int inner = 1;
        while (inner <= 3) {
            std::cout << "  Inner loop iteration: " << inner << std::endl;
            inner++;
        }
    }

    // Nested loops are powerful for processing data in multiple dimensions,
    // such as matrices, tables, or generating complex patterns.

    return 0; // Indicate successful program execution.
}
