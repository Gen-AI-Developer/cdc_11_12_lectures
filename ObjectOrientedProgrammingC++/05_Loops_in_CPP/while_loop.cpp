// 05_Loops_in_CPP/while_loop.cpp
// This program demonstrates the 'while' loop in C++.
// The 'while' loop repeatedly executes a block of code as long as a given condition is true.
// It is an entry-controlled loop, meaning the condition is checked before each iteration.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. Basic while loop: Counting from 1 to 5 ---
    int count = 1; // Initialization
    std::cout << "Counting from 1 to 5 using while loop:" << std::endl;
    while (count <= 5) { // Condition: loop continues as long as count is less than or equal to 5.
        std::cout << count << " "; // Print the current value of count.
        count++; // Update: increment count in each iteration.
    }
    std::cout << std::endl; // Print a newline at the end.

    // --- 2. while loop: Sum of digits of a number ---
    int number = 12345;
    int sumOfDigits = 0;
    std::cout << "\nCalculating sum of digits for " << number << ":" << std::endl;
    int tempNumber = number; // Use a temporary variable to avoid modifying the original number.
    while (tempNumber > 0) {
        int digit = tempNumber % 10; // Get the last digit.
        sumOfDigits += digit;        // Add it to sum.
        tempNumber /= 10;            // Remove the last digit.
    }
    std::cout << "Sum of digits of " << number << " is: " << sumOfDigits << std::endl; // Output: 15

    // --- 3. User input controlled while loop ---
    char choice = 'y';
    std::cout << "\n--- User Input Loop ---" << std::endl;
    while (choice == 'y' || choice == 'Y') {
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            std::cout << "Continuing..." << std::endl;
        }
    }
    std::cout << "Loop terminated." << std::endl;

    // --- 4. Infinite while loop (use with caution, requires a 'break' or external termination) ---
    // while (true) {
    //     std::cout << "This will print forever unless broken." << std::endl;
    //     // Add a break condition here to exit, e.g., if (someCondition) break;
    // }

    // Key points about while loop:
    // - Condition is checked at the beginning.
    // - If the condition is initially false, the loop body will not execute even once.
    // - Ensure that the condition eventually becomes false to avoid infinite loops.

    return 0; // Indicate successful program execution.
}
