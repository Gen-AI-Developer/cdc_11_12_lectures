// 03_Operators_in_Cpp/increment_decrement_operators.cpp
// This program demonstrates the use of increment (++) and decrement (--) operators in C++.
// These operators are used to increase or decrease the value of a variable by 1.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int count = 5; // Declare and initialize integer variable 'count'.
    std::cout << "Initial count: " << count << std::endl; // Output: Initial count: 5

    // --- 1. Pre-increment (++) ---
    // Increments the value of the operand first, then uses the new value in the expression.
    int preIncrementResult = ++count; 
    // count becomes 6, then preIncrementResult gets 6.
    std::cout << "After pre-increment (++count):" << std::endl;
    std::cout << "  count: " << count << std::endl;             // Output: count: 6
    std::cout << "  preIncrementResult: " << preIncrementResult << std::endl; // Output: preIncrementResult: 6

    count = 5; // Reset count for the next example.
    std::cout << "\nReset count to: " << count << std::endl; // Output: Reset count to: 5

    // --- 2. Post-increment (++) ---
    // Uses the current value of the operand in the expression first, then increments the value.
    int postIncrementResult = count++; 
    // postIncrementResult gets 5, then count becomes 6.
    std::cout << "After post-increment (count++):" << std::endl;
    std::cout << "  count: " << count << std::endl;              // Output: count: 6
    std::cout << "  postIncrementResult: " << postIncrementResult << std::endl; // Output: postIncrementResult: 5

    count = 5; // Reset count for the next example.
    std::cout << "\nReset count to: " << count << std::endl; // Output: Reset count to: 5

    // --- 3. Pre-decrement (--) ---
    // Decrements the value of the operand first, then uses the new value in the expression.
    int preDecrementResult = --count; 
    // count becomes 4, then preDecrementResult gets 4.
    std::cout << "After pre-decrement (--count):" << std::endl;
    std::cout << "  count: " << count << std::endl;             // Output: count: 4
    std::cout << "  preDecrementResult: " << preDecrementResult << std::endl; // Output: preDecrementResult: 4

    count = 5; // Reset count for the next example.
    std::cout << "\nReset count to: " << count << std::endl; // Output: Reset count to: 5

    // --- 4. Post-decrement (--) ---
    // Uses the current value of the operand in the expression first, then decrements the value.
    int postDecrementResult = count--; 
    // postDecrementResult gets 5, then count becomes 4.
    std::cout << "After post-decrement (count--):" << std::endl;
    std::cout << "  count: " << count << std::endl;              // Output: count: 4
    std::cout << "  postDecrementResult: " << postDecrementResult << std::endl; // Output: postDecrementResult: 5

    // --- Practical Use Case ---
    std::cout << "\n--- Practical Use Case (Loop) ---" << std::endl;
    for (int i = 0; i < 3; ++i) { // Pre-increment is often preferred in loops for slight efficiency gains (though compilers optimize this).
        std::cout << "Loop iteration: " << i << std::endl;
    }

    return 0; // Indicate successful program execution.
}
