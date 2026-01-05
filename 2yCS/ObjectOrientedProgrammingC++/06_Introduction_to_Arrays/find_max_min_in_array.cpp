// 06_Introduction_to_Arrays/find_max_min_in_array.cpp
// This program demonstrates how to find the maximum and minimum elements in a one-dimensional array in C++.

#include <iostream> // Include the iostream library for input/output operations.
#include <limits>   // Required for std::numeric_limits (to get min/max possible values).

int main() { // The main function where program execution begins.

    const int SIZE = 7; // Define a constant for array size.
    int numbers[SIZE] = {5, 12, 9, 25, 3, 18, 7}; // Declare and initialize an integer array.

    std::cout << "Array elements: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // --- 1. Finding the Maximum Element ---
    // Initialize max_val with the smallest possible integer value
    // or with the first element of the array.
    int max_val = std::numeric_limits<int>::min(); // Safest way to initialize for any possible array values.
    // Alternatively, if you are sure the array is not empty:
    // int max_val = numbers[0];

    if (SIZE > 0) { // Ensure the array is not empty.
        max_val = numbers[0]; // Assume the first element is the maximum.
        for (int i = 1; i < SIZE; ++i) { // Start from the second element.
            if (numbers[i] > max_val) { // If current element is greater than current max_val
                max_val = numbers[i];   // Update max_val.
            }
        }
        std::cout << "\nMaximum element in the array: " << max_val << std::endl; // Output: 25
    } else {
        std::cout << "\nArray is empty, cannot find maximum." << std::endl;
    }

    // --- 2. Finding the Minimum Element ---
    // Initialize min_val with the largest possible integer value
    // or with the first element of the array.
    int min_val = std::numeric_limits<int>::max(); // Safest way to initialize for any possible array values.
    // Alternatively, if you are sure the array is not empty:
    // int min_val = numbers[0];

    if (SIZE > 0) { // Ensure the array is not empty.
        min_val = numbers[0]; // Assume the first element is the minimum.
        for (int i = 1; i < SIZE; ++i) { // Start from the second element.
            if (numbers[i] < min_val) { // If current element is less than current min_val
                min_val = numbers[i];   // Update min_val.
            }
        }
        std::cout << "Minimum element in the array: " << min_val << std::endl; // Output: 3
    } else {
        std::cout << "Array is empty, cannot find minimum." << std::endl;
    }

    // These operations are fundamental for data analysis and processing with arrays.

    return 0; // Indicate successful program execution.
}
