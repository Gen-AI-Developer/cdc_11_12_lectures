// 07_Two_dimensional_arrays/matrix_addition.cpp
// This program demonstrates matrix addition for two 2D arrays in C++.
// Matrix addition is performed by adding corresponding elements of two matrices.
// Both matrices must have the same number of rows and columns.

#include <iostream> // Include the iostream library for input/output operations.

// Function to print a matrix
void printMatrix(const int matrix[][3], int rows, int cols) { // Note: column size must be specified for 2D arrays in function parameters.
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() { // The main function where program execution begins.

    const int ROWS = 2; // Number of rows for the matrices.
    const int COLS = 3; // Number of columns for the matrices.

    // Declare and initialize two matrices.
    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrixB[ROWS][COLS] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // Declare a result matrix to store the sum.
    int sumMatrix[ROWS][COLS];

    std::cout << "Matrix A:" << std::endl;
    printMatrix(matrixA, ROWS, COLS);

    std::cout << "\nMatrix B:" << std::endl;
    printMatrix(matrixB, ROWS, COLS);

    // --- Performing Matrix Addition ---
    // Iterate through each element of the matrices and add corresponding elements.
    for (int i = 0; i < ROWS; ++i) { // Loop through rows.
        for (int j = 0; j < COLS; ++j) { // Loop through columns.
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j]; // Add elements and store in sumMatrix.
        }
    }

    std::cout << "\nSum of Matrix A and Matrix B:" << std::endl;
    printMatrix(sumMatrix, ROWS, COLS);

    // Example of expected output for sumMatrix:
    // 8   10  12
    // 14  16  18

    // Note: If matrices have different dimensions, addition is not possible.
    // In a real-world scenario, you would add checks for compatible dimensions.

    return 0; // Indicate successful program execution.
}
