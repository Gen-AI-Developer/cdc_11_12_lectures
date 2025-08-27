// 01_CPP_Constants_and_Variables/scope_of_variables.cpp
// This program demonstrates the concept of variable scope in C++ (local and global variables).

#include <iostream> // Include the iostream library for input/output operations.

// Global variable declaration
// Global variables are declared outside any function and can be accessed from anywhere in the program.
int globalVar = 100; 

void demonstrateLocalScope() { // A function to demonstrate local scope.
    // Local variable declaration
    // Local variables are declared inside a function or a block and are only accessible within that function/block.
    int localVar = 50; 
    std::cout << "Inside demonstrateLocalScope function:" << std::endl;
    std::cout << "Local variable (localVar): " << localVar << std::endl; // Accessing local variable.
    std::cout << "Global variable (globalVar): " << globalVar << std::endl; // Accessing global variable.
}

int main() { // The main function where program execution begins.

    std::cout << "Inside main function:" << std::endl;
    std::cout << "Global variable (globalVar): " << globalVar << std::endl; // Accessing global variable from main.

    // Attempting to access localVar here would result in a compile-time error
    // because it is out of scope.
    // Uncommenting the line below will cause an error:
    // std::cout << "Local variable (localVar) in main: " << localVar << std::endl;

    demonstrateLocalScope(); // Call the function to demonstrate its local scope.

    // Another block to demonstrate block scope
    {
        int blockVar = 20; // blockVar is local to this block.
        std::cout << "Inside a block:" << std::endl;
        std::cout << "Block variable (blockVar): " << blockVar << std::endl;
    } // blockVar is destroyed here.

    // Attempting to access blockVar here would result in a compile-time error.
    // Uncommenting the line below will cause an error:
    // std::cout << "Block variable (blockVar) in main: " << blockVar << std::endl;

    return 0; // Indicate successful program execution.
}
