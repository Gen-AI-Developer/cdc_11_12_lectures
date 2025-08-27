// 06_Introduction_to_Arrays/array_traversal.cpp
// This program demonstrates different ways to traverse (iterate through) elements of a one-dimensional array in C++.

#include <iostream> // Include the iostream library for input/output operations.
#include <vector>   // Include the vector library for using std::vector (for range-based for loop example).

int main() { // The main function where program execution begins.

    const int SIZE = 5; // Define a constant for array size.
    int numbers[SIZE] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array.

    std::cout << "Original array elements: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // --- 1. Traversing using a traditional for loop (index-based) ---
    // This is the most common way to traverse arrays when you need the index.
    std::cout << "\n--- Traversal using traditional for loop ---" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    // --- 2. Traversing using a while loop ---
    // Useful when the termination condition is not strictly based on a fixed count.
    std::cout << "\n--- Traversal using while loop ---" << std::endl;
    int i = 0; // Initialize loop counter.
    while (i < SIZE) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
        i++; // Increment loop counter.
    }

    // --- 3. Traversing using a do-while loop ---
    // Ensures at least one iteration, even if the array is empty (though typically not for traversal).
    // For an empty array, this would lead to out-of-bounds access if not handled carefully.
    std::cout << "\n--- Traversal using do-while loop ---" << std::endl;
    int j = 0;
    if (SIZE > 0) { // Check to prevent out-of-bounds access on an empty array.
        do {
            std::cout << "Element at index " << j << ": " << numbers[j] << std::endl;
            j++;
        } while (j < SIZE);
    } else {
        std::cout << "Array is empty, do-while loop skipped." << std::endl;
    }

    // --- 4. Traversing using a range-based for loop (C++11 and later) ---
    // This is the most modern and often preferred way for simple iteration when the index is not needed.
    std::cout << "\n--- Traversal using range-based for loop ---" << std::endl;
    for (int num : numbers) { // 'num' will take on the value of each element in 'numbers'.
        std::cout << "Element value: " << num << std::endl;
    }

    // Example with a std::vector (which also supports range-based for loop)
    std::vector<double> temperatures = {22.5, 24.1, 23.8, 25.0};
    std::cout << "\n--- Traversal using range-based for loop with std::vector ---" << std::endl;
    for (double temp : temperatures) {
        std::cout << "Temperature: " << temp << std::endl;
    }

    // When to use which loop:
    // - Traditional for loop: When you need to access elements by index, or iterate a fixed number of times.
    // - While loop: When the number of iterations is unknown and depends on a condition.
    // - Do-while loop: When you need the loop body to execute at least once.
    // - Range-based for loop: When you simply need to iterate over all elements of a collection and don't need the index.

    return 0; // Indicate successful program execution.
}
