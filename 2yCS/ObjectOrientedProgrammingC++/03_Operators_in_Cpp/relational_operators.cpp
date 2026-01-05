// 03_Operators_in_Cpp/relational_operators.cpp
// This program demonstrates the use of relational (comparison) operators in C++.
// Relational operators are used to compare two values and return a boolean result (true or false).

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int a = 10; // Declare and initialize integer variable 'a'.
    int b = 20; // Declare and initialize integer variable 'b'.
    int c = 10; // Declare and initialize integer variable 'c'.

    // To display boolean results as "true" or "false" instead of 1 or 0.
    std::cout << std::boolalpha; 

    // --- 1. Equal to (==) ---
    // Checks if two operands are equal.
    std::cout << "a == b: " << (a == b) << std::endl; // Output: a == b: false (10 is not equal to 20)
    std::cout << "a == c: " << (a == c) << std::endl; // Output: a == c: true (10 is equal to 10)

    // --- 2. Not equal to (!=) ---
    // Checks if two operands are not equal.
    std::cout << "a != b: " << (a != b) << std::endl; // Output: a != b: true
    std::cout << "a != c: " << (a != c) << std::endl; // Output: a != c: false

    // --- 3. Greater than (>) ---
    // Checks if the left operand is greater than the right operand.
    std::cout << "a > b: " << (a > b) << std::endl; // Output: a > b: false
    std::cout << "b > a: " << (b > a) << std::endl; // Output: b > a: true

    // --- 4. Less than (<) ---
    // Checks if the left operand is less than the right operand.
    std::cout << "a < b: " << (a < b) << std::endl; // Output: a < b: true
    std::cout << "b < a: " << (b < a) << std::endl; // Output: b < a: false

    // --- 5. Greater than or equal to (>=) ---
    // Checks if the left operand is greater than or equal to the right operand.
    std::cout << "a >= b: " << (a >= b) << std::endl; // Output: a >= b: false
    std::cout << "a >= c: " << (a >= c) << std::endl; // Output: a >= c: true

    // --- 6. Less than or equal to (<=) ---
    // Checks if the left operand is less than or equal to the right operand.
    std::cout << "a <= b: " << (a <= b) << std::endl; // Output: a <= b: true
    std::cout << "a <= c: " << (a <= c) << std::endl; // Output: a <= c: true

    // You can use relational operators in conditional statements (e.g., if statements).
    if (a < b) {
        std::cout << "\nIndeed, a is less than b." << std::endl;
    }

    return 0; // Indicate successful program execution.
}
