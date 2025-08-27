// 05_Loops_in_CPP/range_based_for_loop.cpp
// This program demonstrates the range-based for loop (introduced in C++11).
// It provides a simpler and more readable way to iterate over elements of a range (like arrays, vectors, etc.)
// without explicitly managing iterators or indices.

#include <iostream> // Include the iostream library for input/output operations.
#include <vector>   // Include the vector library for using std::vector.
#include <string>   // Include the string library for std::string.

int main() { // The main function where program execution begins.

    // --- 1. Iterating over an array ---
    int numbers[] = {10, 20, 30, 40, 50};
    std::cout << "--- Iterating over an array ---" << std::endl;
    for (int num : numbers) { // For each 'num' in 'numbers'
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // --- 2. Iterating over a std::vector ---
    std::vector<std::string> fruits = {"Apple", "Banana", "Cherry", "Date"};
    std::cout << "\n--- Iterating over a std::vector ---" << std::endl;
    for (const std::string& fruit : fruits) { // Using const reference to avoid copying and allow const access.
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    // --- 3. Modifying elements using a non-const reference ---
    std::vector<int> scores = {10, 20, 30};
    std::cout << "\n--- Modifying elements in a vector ---" << std::endl;
    std::cout << "Original scores: ";
    for (int score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    for (int& score : scores) { // Using a non-const reference to modify elements.
        score *= 2; // Double each score.
    }

    std::cout << "Modified scores: ";
    for (int score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    // --- 4. Iterating over a C-style string (character array) ---
    char message[] = "Hello";
    std::cout << "\n--- Iterating over a C-style string ---" << std::endl;
    for (char c : message) {
        if (c == '\0') break; // C-style strings are null-terminated, so stop at '\0'.
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // Key advantages of range-based for loop:
    // - Simpler syntax, less prone to off-by-one errors.
    // - More readable code, especially for simple iteration.
    // - Works with any type that provides `begin()` and `end()` (or `cbegin()`/`cend()`).

    return 0; // Indicate successful program execution.
}
