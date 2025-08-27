// 09_Functions/function_with_parameters.cpp
// This program demonstrates functions that accept parameters (arguments) in C++.
// Parameters allow functions to receive data from the caller, making them more flexible and reusable.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for std::string.

// --- Function with one parameter ---
// This function takes an integer 'num' as a parameter and prints whether it's even or odd.
void checkEvenOdd(int num) { 
    if (num % 2 == 0) {
        std::cout << num << " is an even number." << std::endl;
    } else {
        std::cout << num << " is an odd number." << std::endl;
    }
}

// --- Function with multiple parameters ---
// This function takes two integers and calculates their sum.
void addNumbers(int a, int b) {
    int sum = a + b;
    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
}

// --- Function with different data type parameters ---
// This function takes a string and an integer to print a personalized message.
void printMessage(std::string name, int age) {
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
}

int main() { // The main function where program execution begins.

    std::cout << "--- Calling checkEvenOdd() ---" << std::endl;
    checkEvenOdd(4);  // Call with argument 4.
    checkEvenOdd(7);  // Call with argument 7.
    int myNumber = 10;
    checkEvenOdd(myNumber); // Call with a variable.

    std::cout << "\n--- Calling addNumbers() ---" << std::endl;
    addNumbers(5, 3);   // Call with arguments 5 and 3.
    addNumbers(100, 200); // Call with arguments 100 and 200.

    std::cout << "\n--- Calling printMessage() ---" << std::endl;
    printMessage("Alice", 30);
    printMessage("Bob", 25);

    // Key points about parameters:
    // - Parameters are variables declared in the function definition that receive values when the function is called.
    // - The values passed during the function call are called arguments.
    // - The data type and order of arguments must match the parameters in the function definition.

    return 0; // Indicate successful program execution.
}
