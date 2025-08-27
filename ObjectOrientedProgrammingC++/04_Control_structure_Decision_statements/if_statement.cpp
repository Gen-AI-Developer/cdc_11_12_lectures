// 04_Control_structure_Decision_statements/if_statement.cpp
// This program demonstrates the basic 'if' statement in C++.
// The 'if' statement is used to execute a block of code only if a specified condition is true.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int number = 10; // Declare and initialize an integer variable.

    std::cout << "Checking if number is positive..." << std::endl;

    // --- 1. Basic if statement ---
    // The code inside the if block will execute only if the condition (number > 0) is true.
    if (number > 0) { 
        std::cout << "The number " << number << " is positive." << std::endl;
    }

    number = -5; // Change the number to a negative value.
    std::cout << "\nChecking if number is positive again..." << std::endl;

    if (number > 0) { 
        // This block will not execute because the condition (number > 0) is false.
        std::cout << "The number " << number << " is positive." << std::endl;
    }
    else {
        std::cout << "The number " << number << " is not positive." << std::endl;
    }

    // --- 2. if statement with a boolean variable ---
    bool isLoggedIn = true;
    if (isLoggedIn) {
        std::cout << "\nUser is logged in." << std::endl;
    }

    // --- 3. if statement with a single statement (no curly braces needed, but good practice to use them) ---
    int x = 20;
    if (x == 20)
        std::cout << "\nx is exactly 20." << std::endl;

    // Note: For multiple statements, curly braces {} are mandatory for the if block.
    // It's generally good practice to always use curly braces for clarity and to avoid potential bugs.

    return 0; // Indicate successful program execution.
}
