// 03_Operators_in_Cpp/logical_operators.cpp
// This program demonstrates the use of logical operators in C++.
// Logical operators are used to combine or negate boolean expressions.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    bool condition1 = true;  // Declare and initialize boolean variable condition1.
    bool condition2 = false; // Declare and initialize boolean variable condition2.

    int a = 10;
    int b = 20;
    int c = 5;

    // To display boolean results as "true" or "false" instead of 1 or 0.
    std::cout << std::boolalpha; 

    // --- 1. Logical AND (&&) ---
    // Returns true if both operands are true, otherwise returns false.
    std::cout << "--- Logical AND (&&) ---" << std::endl;
    std::cout << "condition1 && condition2: " << (condition1 && condition2) << std::endl; // Output: false
    std::cout << "condition1 && true: " << (condition1 && true) << std::endl;         // Output: true
    std::cout << "(a > b) && (a > c): " << ((a > b) && (a > c)) << std::endl; // (false && true) -> false
    std::cout << "(a < b) && (a > c): " << ((a < b) && (a > c)) << std::endl; // (true && true) -> true

    // --- 2. Logical OR (||) ---
    // Returns true if at least one of the operands is true, otherwise returns false.
    std::cout << "\n--- Logical OR (||) ---" << std::endl;
    std::cout << "condition1 || condition2: " << (condition1 || condition2) << std::endl; // Output: true
    std::cout << "condition2 || false: " << (condition2 || false) << std::endl;       // Output: false
    std::cout << "(a > b) || (a > c): " << ((a > b) || (a > c)) << std::endl; // (false || true) -> true
    std::cout << "(a < b) || (a < c): " << ((a < b) || (a < c)) << std::endl; // (true || false) -> true

    // --- 3. Logical NOT (!) ---
    // Reverses the boolean state of its operand. If an operand is true, ! makes it false, and vice-versa.
    std::cout << "\n--- Logical NOT (!) ---" << std::endl;
    std::cout << "!condition1: " << (!condition1) << std::endl; // Output: false
    std::cout << "!condition2: " << (!condition2) << std::endl; // Output: true
    std::cout << "!(a == b): " << (!(a == b)) << std::endl;   // !(false) -> true

    // --- Combining Logical Operators ---
    std::cout << "\n--- Combined Logical Operators ---" << std::endl;
    bool complexCondition = (a < b && c < a) || (b > c && !condition2);
    // (true && true) || (true && true) -> true || true -> true
    std::cout << "Complex condition: " << complexCondition << std::endl; // Output: true

    // Logical operators are commonly used in control flow statements like if, while, and for.
    if (a < b && b > c) {
        std::cout << "\nBoth conditions (a < b AND b > c) are true." << std::endl;
    }

    return 0; // Indicate successful program execution.
}
