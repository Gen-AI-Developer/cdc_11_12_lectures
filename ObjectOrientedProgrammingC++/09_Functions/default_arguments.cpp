// 09_Functions/default_arguments.cpp
// This program demonstrates the use of default arguments in C++ functions.
// Default arguments allow a function to be called with fewer arguments than it is defined to accept.
// If an argument is omitted during a function call, its default value is used.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for std::string.

// --- Function with default arguments ---
// Default arguments are specified in the function declaration (prototype) or definition.
// Once a default argument is provided, all subsequent parameters to its right must also have default arguments.
void displayInfo(std::string name, int age = 30, std::string city = "Unknown") {
    std::cout << "Name: " << name 
              << ", Age: " << age 
              << ", City: " << city << std::endl;
}

// Another example: calculating power with default exponent
double power(double base, int exp = 2) {
    double result = 1.0;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() { // The main function where program execution begins.

    std::cout << "--- Calling displayInfo() with default arguments ---" << std::endl;

    // 1. Call with all arguments provided (overrides defaults).
    displayInfo("Alice", 25, "New York"); // Output: Name: Alice, Age: 25, City: New York

    // 2. Call with one argument omitted (uses default for 'city').
    displayInfo("Bob", 40);             // Output: Name: Bob, Age: 40, City: Unknown

    // 3. Call with two arguments omitted (uses defaults for 'age' and 'city').
    displayInfo("Charlie");             // Output: Name: Charlie, Age: 30, City: Unknown

    // Invalid call: Cannot skip an argument in the middle without providing a default for it.
    // displayInfo("David", , "London"); // This would be a compile-time error.

    std::cout << "\n--- Calling power() with default arguments ---" << std::endl;

    // 1. Call with default exponent (exp = 2).
    std::cout << "Power(2.0): " << power(2.0) << std::endl;       // Output: 4.0 (2.0^2)

    // 2. Call with custom exponent.
    std::cout << "Power(3.0, 3): " << power(3.0, 3) << std::endl; // Output: 27.0 (3.0^3)

    // Key points about default arguments:
    // - They must be specified from right to left in the parameter list.
    // - They make functions more flexible and reduce the number of overloaded functions needed for similar tasks.
    // - If a function has both a declaration and a definition, default arguments should only be specified
    //   in the function declaration (prototype), not in the definition.

    return 0; // Indicate successful program execution.
}
