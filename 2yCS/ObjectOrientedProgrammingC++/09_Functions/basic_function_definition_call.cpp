// 09_Functions/basic_function_definition_call.cpp
// This program demonstrates the basic concept of defining and calling a function in C++.
// Functions are blocks of code that perform a specific task and can be reused.

#include <iostream> // Include the iostream library for input/output operations.

// --- Function Definition ---
// Syntax: returnType functionName(parameters) { function_body }
// This function is named 'greet', it doesn't take any parameters, and it doesn't return any value (void).
void greet() { 
    std::cout << "Hello from the greet function!" << std::endl;
    std::cout << "This is a simple function call." << std::endl;
}

// Another simple function
void sayGoodbye() {
    std::cout << "Goodbye!" << std::endl;
}

int main() { // The main function is the entry point of the program.

    std::cout << "Inside main function, before calling greet()." << std::endl;

    // --- Function Call ---
    // To execute the code inside a function, you call it by its name followed by parentheses.
    greet(); // Calls the 'greet' function.

    std::cout << "Inside main function, after calling greet()." << std::endl;

    // You can call a function multiple times.
    greet(); // Call greet again.

    sayGoodbye(); // Call the sayGoodbye function.

    std::cout << "Main function finished." << std::endl;

    // Key concepts:
    // - Modularity: Functions break down a large program into smaller, manageable parts.
    // - Reusability: A function can be called multiple times from different parts of the program.
    // - Abstraction: You can use a function without knowing its internal implementation details.

    return 0; // Indicate successful program execution.
}
