// 06_Introduction_to_Arrays/array_declaration_initialization.cpp
// This program demonstrates the declaration, initialization, and basic access of one-dimensional arrays in C++.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. Array Declaration ---
    // Syntax: dataType arrayName[arraySize];
    // The arraySize must be a constant integer expression.
    int numbers[5]; // Declares an integer array named 'numbers' that can hold 5 elements.
                    // The elements are not initialized and will contain garbage values.

    // --- 2. Array Initialization ---

    // a) Initialization at declaration with an initializer list.
    // The size can be omitted, and the compiler will deduce it from the number of elements.
    int scores[] = {10, 20, 30, 40, 50}; // Declares and initializes an array of 5 integers.

    // b) Initialization at declaration with specified size.
    int ages[3] = {22, 25, 28}; // Declares an array of 3 integers and initializes them.

    // c) Partial initialization: Remaining elements are initialized to zero.
    int data[5] = {1, 2}; // data[0]=1, data[1]=2, data[2]=0, data[3]=0, data[4]=0

    // d) Initializing all elements to zero (if size is specified).
    int zeros[4] = {}; // All elements will be 0.
    // int zeros[4] = {0}; // Also initializes all elements to 0.

    // --- 3. Accessing Array Elements ---
    // Array elements are accessed using their index (position), which starts from 0.
    // Syntax: arrayName[index]

    std::cout << "\n--- Accessing elements of 'scores' array ---" << std::endl;
    std::cout << "First element (scores[0]): " << scores[0] << std::endl;   // Output: 10
    std::cout << "Third element (scores[2]): " << scores[2] << std::endl;   // Output: 30
    std::cout << "Last element (scores[4]): " << scores[4] << std::endl;    // Output: 50

    // --- 4. Modifying Array Elements ---
    // Elements can be modified by assigning a new value to a specific index.
    std::cout << "\n--- Modifying elements of 'ages' array ---" << std::endl;
    std::cout << "Original ages[1]: " << ages[1] << std::endl; // Output: 25
    ages[1] = 26; // Change the second element.
    std::cout << "Modified ages[1]: " << ages[1] << std::endl; // Output: 26

    // --- 5. Inputting values into an array ---
    const int SIZE = 3;
    int userInputs[SIZE];
    std::cout << "\n--- Inputting values into 'userInputs' array ---" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> userInputs[i]; // Read input into each array element.
    }

    std::cout << "You entered: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << userInputs[i] << " ";
    }
    std::cout << std::endl;

    // Important: C++ does not perform bounds checking on arrays.
    // Accessing an element outside the declared size (e.g., scores[5] or scores[-1])
    // leads to undefined behavior, which can cause crashes or unexpected results.

    return 0; // Indicate successful program execution.
}
