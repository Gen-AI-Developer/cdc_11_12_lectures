// 10_Functions_passing_arguments_and_returning_values/pass_by_reference.cpp
// This program demonstrates the "pass by reference" mechanism for function arguments in C++.
// When arguments are passed by reference, the function receives a reference (an alias)
// to the original variable, not a copy. This allows the function to directly access
// and modify the original argument in the caller's scope.

#include <iostream> // Include the iostream library for input/output operations.

// Function to demonstrate pass by reference
void incrementByReference(int& num) { // 'int& num' declares num as a reference to an integer.
    std::cout << "  Inside function (before increment): num = " << num << std::endl; // num is an alias for the original variable
    num++; // Incrementing the original variable
    std::cout << "  Inside function (after increment): num = " << num << std::endl;   // The original variable has changed
}

// Function to swap two integers by reference
void swapByReference(int& a, int& b) {
    std::cout << "  Inside swapByReference (before swap): a = " << a << ", b = " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "  Inside swapByReference (after swap): a = " << a << ", b = " << b << std::endl;
}

// Function with a const reference parameter
// Using 'const int&' means the function receives a reference but cannot modify the original variable.
// This is efficient (no copy) and safe (no modification).
void printValue(const int& num) {
    std::cout << "  Inside printValue: num = " << num << std::endl;
    // num++; // This would cause a compile-time error because num is const.
}

int main() { // The main function where program execution begins.

    // --- Example 1: Passing a single integer by reference ---
    int myValue = 10;
    std::cout << "--- Pass by Reference: Single Integer ---" << std::endl;
    std::cout << "In main (before call): myValue = " << myValue << std::endl; // Output: 10
    incrementByReference(myValue); // Pass myValue by reference
    std::cout << "In main (after call): myValue = " << myValue << std::endl;  // Output: 11 (original has changed)

    // --- Example 2: Swapping two integers by reference ---
    int x = 5;
    int y = 8;
    std::cout << "\n--- Pass by Reference: Swapping ---" << std::endl;
    std::cout << "In main (before swap): x = " << x << ", y = " << y << std::endl; // Output: x = 5, y = 8
    swapByReference(x, y); // Pass x and y by reference
    std::cout << "In main (after swap): x = " << x << ", y = " << y << std::endl;  // Output: x = 8, y = 5 (originals have swapped)

    // --- Example 3: Using const reference ---
    int readOnlyValue = 20;
    std::cout << "\n--- Pass by Const Reference ---" << std::endl;
    std::cout << "In main (before print): readOnlyValue = " << readOnlyValue << std::endl;
    printValue(readOnlyValue);
    std::cout << "In main (after print): readOnlyValue = " << readOnlyValue << std::endl; // Output: 20 (original unchanged)

    // Key characteristics of pass by reference:
    // - The function works directly with the original variable, not a copy.
    // - Changes to the parameter inside the function affect the original argument.
    // - More efficient for large objects as no copying is involved.
    // - Use `const` reference (`const T&`) when you want efficiency but also want to prevent modification.

    return 0; // Indicate successful program execution.
}
