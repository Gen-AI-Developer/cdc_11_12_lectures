// 03_Operators_in_Cpp/bitwise_operators.cpp
// This program demonstrates the use of bitwise operators in C++.
// Bitwise operators perform operations on individual bits of integer types.

#include <iostream> // Include the iostream library for input/output operations.
#include <bitset>   // Include the bitset library to easily display binary representations.

int main() { // The main function where program execution begins.

    unsigned int a = 5;  // Binary: 0000 0101
    unsigned int b = 12; // Binary: 0000 1100

    std::cout << "a = " << a << " (binary: " << std::bitset<8>(a) << ")" << std::endl;
    std::cout << "b = " << b << " (binary: " << std::bitset<8>(b) << ")" << std::endl;

    // --- 1. Bitwise AND (&) ---
    // Sets each bit to 1 if both corresponding bits are 1.
    unsigned int result_and = a & b; // 0000 0101 & 0000 1100 = 0000 0100 (4)
    std::cout << "\nBitwise AND (a & b): " << result_and 
              << " (binary: " << std::bitset<8>(result_and) << ")" << std::endl; // Output: 4

    // --- 2. Bitwise OR (|) ---
    // Sets each bit to 1 if at least one of the corresponding bits is 1.
    unsigned int result_or = a | b; // 0000 0101 | 0000 1100 = 0000 1101 (13)
    std::cout << "Bitwise OR (a | b): " << result_or 
              << " (binary: " << std::bitset<8>(result_or) << ")" << std::endl;   // Output: 13

    // --- 3. Bitwise XOR (^) ---
    // Sets each bit to 1 if only one of the corresponding bits is 1 (exclusive OR).
    unsigned int result_xor = a ^ b; // 0000 0101 ^ 0000 1100 = 0000 1001 (9)
    std::cout << "Bitwise XOR (a ^ b): " << result_xor 
              << " (binary: " << std::bitset<8>(result_xor) << ")" << std::endl;  // Output: 9

    // --- 4. Bitwise NOT (~) ---
    // Inverts all bits. For unsigned integers, this is equivalent to (2^N - 1) - number.
    // For an 8-bit unsigned int, ~5 is (2^8 - 1) - 5 = 255 - 5 = 250.
    unsigned int result_not_a = ~a; // ~0000 0101 = 1111 1010 (250 for 8-bit unsigned)
    std::cout << "Bitwise NOT (~a): " << result_not_a 
              << " (binary: " << std::bitset<8>(result_not_a) << ")" << std::endl; // Output: 250

    // --- 5. Left Shift (<<) ---
    // Shifts bits to the left, filling with zeros on the right. Equivalent to multiplying by 2 for each shift.
    unsigned int result_left_shift = a << 1; // 0000 0101 << 1 = 0000 1010 (10)
    std::cout << "Left Shift (a << 1): " << result_left_shift 
              << " (binary: " << std::bitset<8>(result_left_shift) << ")" << std::endl; // Output: 10

    unsigned int result_left_shift_2 = b << 2; // 0000 1100 << 2 = 0011 0000 (48)
    std::cout << "Left Shift (b << 2): " << result_left_shift_2 
              << " (binary: " << std::bitset<8>(result_left_shift_2) << ")" << std::endl; // Output: 48

    // --- 6. Right Shift (>>) ---
    // Shifts bits to the right. For unsigned integers, fills with zeros on the left. Equivalent to dividing by 2 for each shift.
    unsigned int result_right_shift = a >> 1; // 0000 0101 >> 1 = 0000 0010 (2)
    std::cout << "Right Shift (a >> 1): " << result_right_shift 
              << " (binary: " << std::bitset<8>(result_right_shift) << ")" << std::endl; // Output: 2

    unsigned int result_right_shift_2 = b >> 2; // 0000 1100 >> 2 = 0000 0011 (3)
    std::cout << "Right Shift (b >> 2): " << result_right_shift_2 
              << " (binary: " << std::bitset<8>(result_right_shift_2) << ")" << std::endl; // Output: 3

    // Bitwise operators are often used in low-level programming, embedded systems,
    // and for efficient manipulation of flags or individual bits within a number.

    return 0; // Indicate successful program execution.
}
