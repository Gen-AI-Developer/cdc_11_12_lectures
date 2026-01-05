// 03_Operators_in_Cpp/arithmetic_operators.cpp
// This program demonstrates the use of arithmetic operators in C++.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int a = 20; // Declare and initialize integer variable 'a'.
    int b = 7;  // Declare and initialize integer variable 'b'.

    // --- 1. Addition Operator (+) ---
    int sum = a + b; // Adds 'a' and 'b'.
    std::cout << "a + b = " << sum << std::endl; // Output: a + b = 27

    // --- 2. Subtraction Operator (-) ---
    int difference = a - b; // Subtracts 'b' from 'a'.
    std::cout << "a - b = " << difference << std::endl; // Output: a - b = 13

    // --- 3. Multiplication Operator (*) ---
    int product = a * b; // Multiplies 'a' and 'b'.
    std::cout << "a * b = " << product << std::endl; // Output: a * b = 140

    // --- 4. Division Operator (/) ---
    // For integers, division performs integer division (truncates the decimal part).
    int quotient_int = a / b; // Divides 'a' by 'b'.
    std::cout << "a / b (integer division) = " << quotient_int << std::endl; // Output: a / b (integer division) = 2

    // To get floating-point division, at least one operand must be a floating-point type.
    double c = 20.0;
    double d = 7.0;
    double quotient_double = c / d;
    std::cout << "c / d (floating-point division) = " << quotient_double << std::endl; // Output: c / d (floating-point division) = 2.85714

    // --- 5. Modulus Operator (%) ---
    // Returns the remainder of an integer division.
    // Can only be used with integer types.
    int remainder = a % b; // Calculates the remainder when 'a' is divided by 'b'.
    std::cout << "a % b = " << remainder << std::endl; // Output: a % b = 6

    // Example with negative numbers for modulus (behavior can vary with C++ standard before C++11)
    int x = -20;
    int y = 7;
    std::cout << "x % y = " << (x % y) << std::endl; // Output: x % y = -6 (sign of dividend)

    int p = 20;
    int q = -7;
    std::cout << "p % q = " << (p % q) << std::endl; // Output: p % q = 6 (sign of dividend)

    return 0; // Indicate successful program execution.
}
