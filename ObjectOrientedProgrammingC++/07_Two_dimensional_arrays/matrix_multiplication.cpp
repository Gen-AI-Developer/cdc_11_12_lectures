// 07_Two_dimensional_arrays/matrix_multiplication.cpp
// This program demonstrates matrix multiplication for two 2D arrays in C++.
// For matrix multiplication, the number of columns in the first matrix must be equal
// to the number of rows in the second matrix.

#include <iostream> // Include the iostream library for input/output operations.

// Function to print a matrix
// Note: For 2D arrays as function parameters, all dimensions except the first must be specified.
void printMatrix(const int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// Overloaded function for a different column size if needed, or use templates for generic solution.
void printMatrixResult(const int matrix[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() { // The main function where program execution begins.

    // Define dimensions for Matrix A (2x3)
    const int A_ROWS = 2;
    const int A_COLS = 3;
    int matrixA[A_ROWS][A_COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Define dimensions for Matrix B (3x2)
    const int B_ROWS = 3;
    const int B_COLS = 2;
    int matrixB[B_ROWS][B_COLS] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Resultant matrix will have dimensions A_ROWS x B_COLS (2x2)
    const int C_ROWS = A_ROWS;
    const int C_COLS = B_COLS;
    int resultMatrix[C_ROWS][C_COLS];

    // Check if multiplication is possible (A_COLS must be equal to B_ROWS)
    if (A_COLS != B_ROWS) {
        std::cout << "Matrix multiplication not possible! Number of columns in first matrix must equal number of rows in second matrix." << std::endl;
        return 1; // Indicate an error.
    }

    std::cout << "Matrix A (" << A_ROWS << "x" << A_COLS << "):" << std::endl;
    printMatrix(matrixA, A_ROWS, A_COLS);

    std::cout << "\nMatrix B (" << B_ROWS << "x" << B_COLS << "):" << std::endl;
    // Note: printMatrix expects a 3-column matrix, so this call is technically incorrect for matrixB.
    // For simplicity, we'll just print it directly here or use a more generic print function.
    for (int i = 0; i < B_ROWS; ++i) {
        for (int j = 0; j < B_COLS; ++j) {
            std::cout << matrixB[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // --- Performing Matrix Multiplication ---
    // Initialize result matrix with zeros.
    for (int i = 0; i < C_ROWS; ++i) {
        for (int j = 0; j < C_COLS; ++j) {
            resultMatrix[i][j] = 0;
        }
    }

    // Core matrix multiplication logic
    for (int i = 0; i < A_ROWS; ++i) { // Iterate over rows of matrixA
        for (int j = 0; j < B_COLS; ++j) { // Iterate over columns of matrixB
            for (int k = 0; k < A_COLS; ++k) { // Iterate over columns of matrixA (or rows of matrixB)
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    std::cout << "\nResultant Matrix (A * B) (" << C_ROWS << "x" << C_COLS << "):" << std::endl;
    printMatrixResult(resultMatrix, C_ROWS, C_COLS);

    // Expected Output for resultMatrix:
    // (1*7 + 2*9 + 3*11) = 7 + 18 + 33 = 58
    // (1*8 + 2*10 + 3*12) = 8 + 20 + 36 = 64
    // (4*7 + 5*9 + 6*11) = 28 + 45 + 66 = 139
    // (4*8 + 5*10 + 6*12) = 32 + 50 + 72 = 154
    // Result:
    // 58  64
    // 139 154

    return 0; // Indicate successful program execution.
}
