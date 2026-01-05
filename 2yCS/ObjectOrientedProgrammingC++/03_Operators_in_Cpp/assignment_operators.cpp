// 03_Operators_in_Cpp/assignment_operators.cpp
// This program demonstrates the use of assignment operators in C++.
// Assignment operators are used to assign a value to a variable.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int a = 10; // Simple assignment: assigns the value 10 to variable 'a'.
    std::cout << "Initial value of a: " << a << std::endl; // Output: Initial value of a: 10

    // --- 1. Simple Assignment (=) ---
    int b = a; // Assigns the value of 'a' to 'b'.
    std::cout << "Value of b after b = a: " << b << std::endl; // Output: Value of b after b = a: 10

    // --- 2. Add and Assign (+=) ---
    // Equivalent to: a = a + 5;
    a += 5; 
    std::cout << "Value of a after a += 5: " << a << std::endl; // Output: Value of a after a += 5: 15

    // --- 3. Subtract and Assign (-=) ---
    // Equivalent to: a = a - 3;
    a -= 3; 
    std::cout << "Value of a after a -= 3: " << a << std::endl; // Output: Value of a after a -= 3: 12

    // --- 4. Multiply and Assign (*=) ---
    // Equivalent to: a = a * 2;
    a *= 2; 
    std::cout << "Value of a after a *= 2: " << a << std::endl; // Output: Value of a after a *= 2: 24

    // --- 5. Divide and Assign (/=) ---
    // Equivalent to: a = a / 4;
    a /= 4; 
    std::cout << "Value of a after a /= 4: " << a << std::endl; // Output: Value of a after a /= 4: 6

    // --- 6. Modulus and Assign (%=) ---
    // Equivalent to: a = a % 5;
    a %= 5; 
    std::cout << "Value of a after a %= 5: " << a << std::endl; // Output: Value of a after a %= 5: 1

    // --- 7. Bitwise AND and Assign (&=) ---
    // Equivalent to: a = a & 3; (if a is 1, then 001 & 011 = 001 = 1)
    a = 5; // Reset a for this example (binary 101)
    a &= 3; // (binary 101 & 011 = 001)
    std::cout << "Value of a after a &= 3: " << a << std::endl; // Output: Value of a after a &= 3: 1

    // --- 8. Bitwise OR and Assign (|=) ---
    // Equivalent to: a = a | 6; (if a is 1, then 001 | 110 = 111 = 7)
    a = 1; // Reset a for this example (binary 001)
    a |= 6; // (binary 001 | 110 = 111)
    std::cout << "Value of a after a |= 6: " << a << std::endl; // Output: Value of a after a |= 6: 7

    // --- 9. Bitwise XOR and Assign (^=) ---
    // Equivalent to: a = a ^ 3; (if a is 7, then 111 ^ 011 = 100 = 4)
    a = 7; // Reset a for this example (binary 111)
    a ^= 3; // (binary 111 ^ 011 = 100)
    std::cout << "Value of a after a ^= 3: " << a << std::endl; // Output: Value of a after a ^= 3: 4

    // --- 10. Left Shift and Assign (<<=) ---
    // Equivalent to: a = a << 1; (if a is 4, then 100 << 1 = 1000 = 8)
    a = 4; // Reset a for this example (binary 100)
    a <<= 1; // (binary 100 << 1 = 1000)
    std::cout << "Value of a after a <<= 1: " << a << std::endl; // Output: Value of a after a <<= 1: 8

    // --- 11. Right Shift and Assign (>>=) ---
    // Equivalent to: a = a >> 2; (if a is 8, then 1000 >> 2 = 0010 = 2)
    a = 8; // Reset a for this example (binary 1000)
    a >>= 2; // (binary 1000 >> 2 = 0010)
    std::cout << "Value of a after a >>= 2: " << a << std::endl; // Output: Value of a after a >>= 2: 2

    return 0; // Indicate successful program execution.
}
