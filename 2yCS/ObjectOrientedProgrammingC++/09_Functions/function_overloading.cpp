// 09_Functions/function_overloading.cpp
// This program introduces function overloading in C++.
// Function overloading allows you to define multiple functions with the same name
// but different parameter lists (different number of parameters or different types of parameters).
// The compiler determines which function to call based on the arguments provided during the call.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for std::string.

// --- 1. Overloaded functions for adding numbers ---
// Function to add two integers.
int add(int a, int b) {
    std::cout << "Adding two integers: ";
    return a + b;
}

// Function to add two doubles.
double add(double a, double b) {
    std::cout << "Adding two doubles: ";
    return a + b;
}

// Function to add three integers.
int add(int a, int b, int c) {
    std::cout << "Adding three integers: ";
    return a + b + c;
}

// --- 2. Overloaded functions for displaying messages ---
// Function to display a simple message.
void display(std::string message) {
    std::cout << "Message: " << message << std::endl;
}

// Function to display a message a specified number of times.
void display(std::string message, int times) {
    std::cout << "Displaying message " << times << " times:" << std::endl;
    for (int i = 0; i < times; ++i) {
        std::cout << "- " << message << std::endl;
    }
}

int main() { // The main function where program execution begins.

    std::cout << "--- Calling overloaded add() functions ---" << std::endl;
    std::cout << add(5, 10) << std::endl;         // Calls add(int, int)
    std::cout << add(5.5, 10.5) << std::endl;     // Calls add(double, double)
    std::cout << add(1, 2, 3) << std::endl;       // Calls add(int, int, int)

    std::cout << "\n--- Calling overloaded display() functions ---" << std::endl;
    display("Hello!");                          // Calls display(std::string)
    display("Repeat this", 3);                  // Calls display(std::string, int)

    // Key points about function overloading:
    // - Functions must have the same name.
    // - They must have different parameter lists (different number or types of parameters).
    // - The return type alone is NOT sufficient to overload a function.
    // - It enhances code readability and reusability by allowing a single function name
    //   to perform similar operations on different data types or with different argument counts.

    return 0; // Indicate successful program execution.
}
