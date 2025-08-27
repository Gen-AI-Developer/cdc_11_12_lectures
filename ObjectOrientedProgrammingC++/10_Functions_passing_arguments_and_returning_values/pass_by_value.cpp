// 10_Functions_passing_arguments_and_returning_values/pass_by_value.cpp
// This program demonstrates the "pass by value" mechanism for function arguments in C++.
// When arguments are passed by value, a copy of the actual argument's value is made
// and passed to the function's parameter. Any modifications to the parameter inside
// the function do not affect the original argument in the caller's scope.

#include <iostream> // Include the iostream library for input/output operations.

// Function to demonstrate pass by value
void incrementByValue(int num) { 
    std::cout << "  Inside function (before increment): num = " << num << std::endl; // num is a copy
    num++; // Incrementing the copy
    std::cout << "  Inside function (after increment): num = " << num << std::endl;   // The copy has changed
}

// Function to swap two integers by value (will not work as expected)
void swapByValue(int a, int b) {
    std::cout << "  Inside swapByValue (before swap): a = " << a << ", b = " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "  Inside swapByValue (after swap): a = " << a << ", b = " << b << std::endl;
}

int main() { // The main function where program execution begins.

    // --- Example 1: Passing a single integer by value ---
    int myValue = 10;
    std::cout << "--- Pass by Value: Single Integer ---" << std::endl;
    std::cout << "In main (before call): myValue = " << myValue << std::endl; // Output: 10
    incrementByValue(myValue); // Pass a copy of myValue
    std::cout << "In main (after call): myValue = " << myValue << std::endl;  // Output: 10 (original remains unchanged)

    // --- Example 2: Attempting to swap two integers by value ---
    int x = 5;
    int y = 8;
    std::cout << "\n--- Pass by Value: Attempting Swap ---" << std::endl;
    std::cout << "In main (before swap): x = " << x << ", y = " << y << std::endl; // Output: x = 5, y = 8
    swapByValue(x, y); // Pass copies of x and y
    std::cout << "In main (after swap): x = " << x << ", y = " << y << std::endl;  // Output: x = 5, y = 8 (original remains unchanged)

    // Key characteristics of pass by value:
    // - A copy of the argument is made for the parameter.
    // - Changes to the parameter inside the function do not affect the original argument.
    // - It is safe for preventing unintended side effects on the original data.
    // - Can be less efficient for large objects as copying takes time and memory.

    return 0; // Indicate successful program execution.
}
