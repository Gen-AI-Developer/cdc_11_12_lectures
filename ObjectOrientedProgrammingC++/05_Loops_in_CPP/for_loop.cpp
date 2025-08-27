// 05_Loops_in_CPP/for_loop.cpp
// This program demonstrates the 'for' loop in C++.
// The 'for' loop is typically used when the number of iterations is known beforehand.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. Basic for loop: Counting from 1 to 5 ---
    std::cout << "Counting from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; ++i) { // Initialization; Condition; Update
        std::cout << i << " "; // Print the current value of i.
    }
    std::cout << std::endl; // Print a newline at the end.

    // --- 2. for loop: Counting downwards ---
    std::cout << "\nCounting from 5 down to 1:" << std::endl;
    for (int i = 5; i >= 1; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // --- 3. for loop: Iterating with a step other than 1 ---
    std::cout << "\nEven numbers from 0 to 10:" << std::endl;
    for (int i = 0; i <= 10; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // --- 4. for loop: Calculating sum of numbers ---
    int sum = 0;
    int limit = 10;
    std::cout << "\nCalculating sum of numbers from 1 to " << limit << ":" << std::endl;
    for (int i = 1; i <= limit; ++i) {
        sum += i; // Add current 'i' to sum.
    }
    std::cout << "Sum = " << sum << std::endl; // Output: Sum = 55

    // --- 5. Infinite for loop (use with caution, typically requires a 'break' statement) ---
    // for (;;) {
    //     std::cout << "This will print forever unless broken." << std::endl;
    //     // Add a break condition here to exit, e.g., if (someCondition) break;
    // }

    // Components of a for loop:
    // - Initialization: Executed once at the beginning of the loop (e.g., int i = 1;).
    // - Condition: Evaluated before each iteration. If true, the loop body executes. If false, the loop terminates.
    // - Update: Executed after each iteration of the loop body (e.g., ++i).

    return 0; // Indicate successful program execution.
}
