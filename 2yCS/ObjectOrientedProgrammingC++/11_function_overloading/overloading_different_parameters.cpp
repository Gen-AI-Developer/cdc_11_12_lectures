// 11_function_overloading/overloading_different_parameters.cpp
// This program demonstrates function overloading based on the number of parameters.
// C++ allows you to define multiple functions with the same name as long as they have
// a different number of parameters, or different types of parameters (or both).

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for std::string.

// --- 1. Overloading based on the number of parameters ---

// Function to print a single integer.
void print(int a) {
    std::cout << "Printing one integer: " << a << std::endl;
}

// Function to print two integers.
void print(int a, int b) {
    std::cout << "Printing two integers: " << a << ", " << b << std::endl;
}

// Function to print three integers.
void print(int a, int b, int c) {
    std::cout << "Printing three integers: " << a << ", " << b << ", " << c << std::endl;
}

// --- 2. Overloading with different types and number of parameters ---

// Function to calculate the area of a square.
double calculateArea(double side) {
    std::cout << "Calculating area of square: ";
    return side * side;
}

// Function to calculate the area of a rectangle.
double calculateArea(double length, double width) {
    std::cout << "Calculating area of rectangle: ";
    return length * width;
}

// Function to calculate the area of a triangle (base * height / 2).
double calculateArea(double base, double height, double factor) {
    std::cout << "Calculating area of triangle: ";
    return 0.5 * base * height;
}

int main() { // The main function where program execution begins.

    std::cout << "--- Calling overloaded print() functions ---" << std::endl;
    print(10);             // Calls print(int)
    print(10, 20);         // Calls print(int, int)
    print(10, 20, 30);     // Calls print(int, int, int)

    std::cout << "\n--- Calling overloaded calculateArea() functions ---" << std::endl;
    std::cout << calculateArea(5.0) << std::endl;             // Calls calculateArea(double)
    std::cout << calculateArea(4.0, 6.0) << std::endl;         // Calls calculateArea(double, double)
    std::cout << calculateArea(10.0, 5.0, 0.5) << std::endl;   // Calls calculateArea(double, double, double)

    // The compiler uses a process called "overload resolution" to determine which
    // overloaded function to call based on the number and types of arguments provided.

    return 0; // Indicate successful program execution.
}
