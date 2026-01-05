// 00_Introduction/basic_arithmetic.cpp
// This program demonstrates basic arithmetic operations in C++.

#include <iostream> // Include the iostream library for input and output operations.

int main() { // The main function where the program execution begins.

    int num1 = 10; // Declare and initialize an integer variable num1 with value 10.
    int num2 = 5;  // Declare and initialize an integer variable num2 with value 5.

    // Addition
    int sum = num1 + num2; // Perform addition and store the result in 'sum'.
    std::cout << "Sum: " << sum << std::endl; // Print the sum to the console.

    // Subtraction
    int difference = num1 - num2; // Perform subtraction and store the result in 'difference'.
    std::cout << "Difference: " << difference << std::endl; // Print the difference.

    // Multiplication
    int product = num1 * num2; // Perform multiplication and store the result in 'product'.
    std::cout << "Product: " << product << std::endl; // Print the product.

    // Division
    int quotient = num1 / num2; // Perform integer division and store the result in 'quotient'.
    std::cout << "Quotient: " << quotient << std::endl; // Print the quotient.

    // Modulus (remainder)
    int remainder = num1 % num2; // Perform modulus operation and store the result in 'remainder'.
    std::cout << "Remainder: " << remainder << std::endl; // Print the remainder.

    return 0; // Indicate successful program execution.
}
