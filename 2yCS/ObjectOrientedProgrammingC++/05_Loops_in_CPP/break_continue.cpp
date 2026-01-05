// 05_Loops_in_CPP/break_continue.cpp
// This program demonstrates the 'break' and 'continue' statements in C++ loops.
// - 'break' is used to terminate the loop immediately.
// - 'continue' is used to skip the current iteration and proceed to the next one.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. 'break' statement example: Searching for a number ---
    std::cout << "--- Using 'break' to find a number (5) ---" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            std::cout << "Found 5! Breaking loop." << std::endl;
            break; // Exit the loop immediately when 5 is found.
        }
        std::cout << "Current number: " << i << std::endl;
    }
    std::cout << "Loop finished after break.\n" << std::endl;

    // --- 2. 'continue' statement example: Skipping even numbers ---
    std::cout << "--- Using 'continue' to skip even numbers ---" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) { // If 'i' is even
            std::cout << "Skipping even number: " << i << std::endl;
            continue; // Skip the rest of the current iteration and go to the next one.
        }
        std::cout << "Current odd number: " << i << std::endl;
    }
    std::cout << "Loop finished after continue examples.\n" << std::endl;

    // --- 3. 'break' in a while loop: User input validation ---
    int input;
    while (true) { // Infinite loop, will be exited by 'break'
        std::cout << "Enter a positive number (or 0 to exit): ";
        std::cin >> input;

        if (input == 0) {
            std::cout << "Exiting input loop." << std::endl;
            break; // Exit the while loop.
        } else if (input < 0) {
            std::cout << "Invalid input: Please enter a positive number." << std::endl;
            continue; // Skip to the next iteration to ask for input again.
        }
        std::cout << "You entered a valid positive number: " << input << std::endl;
    }

    // Key differences:
    // - 'break' terminates the entire loop.
    // - 'continue' skips only the current iteration and proceeds to the next one.

    return 0; // Indicate successful program execution.
}
