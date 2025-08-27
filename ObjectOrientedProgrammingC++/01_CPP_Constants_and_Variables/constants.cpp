// 01_CPP_Constants_and_Variables/constants.cpp
// This program demonstrates the use of constants in C++ using the 'const' keyword and preprocessor directives.

#include <iostream> // Include the iostream library for input/output operations.

// Define a constant using a preprocessor directive.
// This is a text substitution that happens before compilation.
#define PI 3.14159

int main() { // The main function where program execution begins.

    // Declare a constant using the 'const' keyword.
    // The value of a const variable cannot be changed after initialization.
    const int MAX_ATTEMPTS = 3; // Integer constant for maximum attempts.
    const double GRAVITY = 9.81; // Double constant for gravitational acceleration.

    std::cout << "Maximum Attempts: " << MAX_ATTEMPTS << std::endl; // Print the value of MAX_ATTEMPTS.
    std::cout << "Gravity: " << GRAVITY << std::endl; // Print the value of GRAVITY.
    std::cout << "Pi (from #define): " << PI << std::endl; // Print the value of PI.

    // Attempting to change a const variable will result in a compile-time error.
    // Uncommenting the line below will cause an error:
    // MAX_ATTEMPTS = 5;

    // Constants are useful for values that should not change throughout the program,
    // making the code more readable and preventing accidental modifications.

    return 0; // Indicate successful program execution.
}
