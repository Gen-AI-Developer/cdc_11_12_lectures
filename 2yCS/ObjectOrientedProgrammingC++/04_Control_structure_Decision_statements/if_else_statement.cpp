// 04_Control_structure_Decision_statements/if_else_statement.cpp
// This program demonstrates the 'if-else' statement in C++.
// The 'if-else' statement allows for two-way decision making: one block of code is executed
// if the condition is true, and a different block is executed if the condition is false.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int number; // Declare an integer variable to store user input.

    std::cout << "Enter an integer: "; // Prompt the user for input.
    std::cin >> number; // Read the integer from the console.

    // --- 1. Basic if-else statement ---
    // If the number is even, print "Even", otherwise print "Odd".
    if (number % 2 == 0) { // Condition: if the remainder when divided by 2 is 0.
        std::cout << "The number " << number << " is Even." << std::endl;
    } else { // This block executes if the 'if' condition is false.
        std::cout << "The number " << number << " is Odd." << std::endl;
    }

    // --- 2. Another if-else example: checking eligibility to vote ---
    int age = 18;
    std::cout << "\nChecking voting eligibility for age " << age << ":" << std::endl;
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are not eligible to vote yet." << std::endl;
    }

    age = 16;
    std::cout << "Checking voting eligibility for age " << age << ":" << std::endl;
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are not eligible to vote yet." << std::endl;
    }

    // The if-else statement is fundamental for controlling program flow based on conditions.

    return 0; // Indicate successful program execution.
}
