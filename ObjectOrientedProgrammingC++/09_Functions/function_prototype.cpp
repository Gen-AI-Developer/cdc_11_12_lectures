// 09_Functions/function_prototype.cpp
// This program demonstrates the concept of a function prototype (or function declaration) in C++.
// A function prototype tells the compiler about a function's name, return type, and parameters
// before the function is actually defined. This is necessary when a function is called before its definition.

#include <iostream> // Include the iostream library for input/output operations.

// --- Function Prototypes (Declarations) ---
// These lines declare the functions that will be defined later.
// They inform the compiler about the function's signature.
void displayMessage(); // Prototype for a function with no parameters and no return value.
int multiply(int a, int b); // Prototype for a function taking two ints and returning an int.
double divide(double numerator, double denominator); // Prototype for a function taking two doubles and returning a double.

int main() { // The main function where program execution begins.

    std::cout << "Inside main function." << std::endl;

    // --- Calling functions using their prototypes ---
    // The compiler knows how to call these functions because their prototypes were provided.
    displayMessage(); // Call displayMessage().

    int product = multiply(5, 10); // Call multiply() and store the result.
    std::cout << "Product of 5 and 10: " << product << std::endl; // Output: 50

    double quotient = divide(10.0, 3.0); // Call divide() and store the result.
    std::cout << "Quotient of 10.0 and 3.0: " << quotient << std::endl; // Output: ~3.33333

    std::cout << "Main function finished." << std::endl;

    return 0; // Indicate successful program execution.
}

// --- Function Definitions ---
// The actual implementation of the functions comes after main() in this example.
// This is common practice, especially when functions are placed in separate .cpp files.

void displayMessage() {
    std::cout << "Hello from displayMessage function!" << std::endl;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0; // Return a default value or handle error appropriately.
    }
    return numerator / denominator;
}

// Key points about function prototypes:
// - They allow functions to be called before they are defined.
// - They ensure type checking of arguments and return values during compilation.
// - They are typically placed in header (.h) files for larger projects,
//   while function definitions are in source (.cpp) files.

