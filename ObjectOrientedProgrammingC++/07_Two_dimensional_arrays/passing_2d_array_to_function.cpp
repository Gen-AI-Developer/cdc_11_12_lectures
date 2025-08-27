// 07_Two_dimensional_arrays/passing_2d_array_to_function.cpp
// This program demonstrates different ways to pass two-dimensional arrays (matrices) to functions in C++.
// Passing 2D arrays to functions can be a bit tricky due to how C++ handles array decay and memory layout.

#include <iostream> // Include the iostream library for input/output operations.

// --- Method 1: Fixed-size 2D array (most common for known dimensions) ---
// The column size MUST be specified in the function parameter.
// The row size is optional but often included for clarity.
void printMatrixFixedSize(int arr[][3], int rows, int cols) {
    std::cout << "\n--- Printing Matrix (Fixed Size) ---" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// --- Method 2: Using a pointer to an array (for dynamically sized rows, fixed columns) ---
// This is useful if you allocate rows dynamically, but columns are fixed.
// The parameter is a pointer to an array of 3 integers.
void printMatrixPointerToArray(int (*arr)[3], int rows, int cols) {
    std::cout << "\n--- Printing Matrix (Pointer to Array) ---" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// --- Method 3: Using a pointer to pointer (for fully dynamic 2D arrays) ---
// This is used when both rows and columns are dynamic (e.g., allocated with `new int*[rows]` and `new int[cols]`).
// Note: This method cannot be used directly with stack-allocated 2D arrays like `int matrix[ROWS][COLS]`.
// For demonstration, we'll simulate it with a dynamically allocated array.
void printMatrixPointerToPointer(int** arr, int rows, int cols) {
    std::cout << "\n--- Printing Matrix (Pointer to Pointer - Dynamic) ---" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// --- Method 4: Using std::vector<std::vector<int>> (Modern C++ approach) ---
// This is the most flexible and recommended way to handle 2D arrays in modern C++.
// It avoids the complexities of raw arrays and provides bounds checking and dynamic resizing.
#include <vector> // Required for std::vector
void printMatrixVector(const std::vector<std::vector<int>>& matrix) {
    std::cout << "\n--- Printing Matrix (std::vector<std::vector<int>>) ---" << std::endl;
    for (const auto& row : matrix) { // Range-based for loop for rows
        for (int val : row) { // Range-based for loop for elements in a row
            std::cout << val << "\t";
        }
        std::cout << std::endl;
    }
}

int main() { // The main function where program execution begins.

    const int ROWS = 2;
    const int COLS = 3;

    // --- Fixed-size 2D array (stack allocated) ---
    int staticMatrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printMatrixFixedSize(staticMatrix, ROWS, COLS);
    // printMatrixPointerToArray(staticMatrix, ROWS, COLS); // This would work as staticMatrix decays to int(*)[3]

    // --- Dynamically allocated 2D array (using pointer to pointer) ---
    int** dynamicMatrix = new int*[ROWS];
    for (int i = 0; i < ROWS; ++i) {
        dynamicMatrix[i] = new int[COLS];
        for (int j = 0; j < COLS; ++j) {
            dynamicMatrix[i][j] = (i + 1) * 10 + (j + 1);
        }
    }
    printMatrixPointerToPointer(dynamicMatrix, ROWS, COLS);

    // Deallocate dynamic memory
    for (int i = 0; i < ROWS; ++i) {
        delete[] dynamicMatrix[i];
    }
    delete[] dynamicMatrix;

    // --- std::vector<std::vector<int>> (Modern C++) ---
    std::vector<std::vector<int>> vectorMatrix = {
        {10, 20, 30},
        {40, 50, 60}
    };
    printMatrixVector(vectorMatrix);

    // Key takeaways:
    // - For fixed-size 2D arrays, the column dimension must be known at compile time for function parameters.
    // - For truly dynamic 2D arrays (where both rows and columns can vary at runtime),
    //   `int**` or `std::vector<std::vector<int>>` are typically used.
    // - `std::vector<std::vector<int>>` is generally preferred in modern C++ for safety and ease of use.

    return 0; // Indicate successful program execution.
}
