// 06_Introduction_to_Arrays/sum_average_array.cpp
// This program demonstrates how to calculate the sum and average of elements in a one-dimensional array in C++.

#include <iostream> // Include the iostream library for input/output operations.
#include <numeric>  // Required for std::accumulate (C++11 and later) for a more concise sum calculation.

int main() { // The main function where program execution begins.

    const int SIZE = 5; // Define a constant for array size.
    int numbers[SIZE] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array.

    std::cout << "Array elements: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // --- 1. Calculating the Sum of Array Elements ---
    long long sum = 0; // Use long long to prevent potential overflow for large sums.

    // Method A: Using a traditional for loop
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i];
    }
    std::cout << "\nSum of array elements (for loop): " << sum << std::endl; // Output: 150

    // Method B: Using a range-based for loop (C++11 and later)
    sum = 0; // Reset sum for this method.
    for (int num : numbers) {
        sum += num;
    }
    std::cout << "Sum of array elements (range-based for loop): " << sum << std::endl; // Output: 150

    // Method C: Using std::accumulate (from <numeric> header, C++11 and later)
    // This is a more functional and often preferred way for summing elements.
    // sum = std::accumulate(numbers, numbers + SIZE, 0LL); // 0LL ensures sum is long long.
    // std::cout << "Sum of array elements (std::accumulate): " << sum << std::endl; // Output: 150

    // --- 2. Calculating the Average of Array Elements ---
    double average = 0.0; // Use double for average to maintain precision.

    if (SIZE > 0) { // Ensure the array is not empty to avoid division by zero.
        average = static_cast<double>(sum) / SIZE; // Cast sum to double before division.
        std::cout << "Average of array elements: " << average << std::endl; // Output: 30.0
    } else {
        std::cout << "Array is empty, cannot calculate average." << std::endl;
    }

    // These calculations are fundamental for basic statistical analysis of data stored in arrays.

    return 0; // Indicate successful program execution.
}
