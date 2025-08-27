// 09_Functions/void_functions.cpp
// This program demonstrates 'void' functions in C++.
// A 'void' function is a function that does not return any value to its caller.
// Its primary purpose is to perform a task or a set of actions.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for std::string.

// --- 1. Simple void function ---
// This function simply prints a greeting message.
void printGreeting() {
    std::cout << "Hello! Welcome to the void function example." << std::endl;
}

// --- 2. Void function with parameters ---
// This function takes a name and prints a personalized greeting.
void greetUser(std::string name) {
    std::cout << "Nice to meet you, " << name << "!" << std::endl;
}

// --- 3. Void function performing an action (e.g., modifying a value via reference) ---
// Note: To modify a variable passed to a void function, you must pass it by reference.
void incrementByOne(int& num) { // 'int& num' means 'num' is a reference to an integer.
    std::cout << "Value before increment: " << num << std::endl;
    num++; // Increments the original variable passed from the caller.
    std::cout << "Value after increment: " << num << std::endl;
}

// --- 4. Void function with multiple tasks ---
// This function simulates a simple menu display.
void displayMenu() {
    std::cout << "\n--- Main Menu ---" << std::endl;
    std::cout << "1. Start Game" << std::endl;
    std::cout << "2. Options" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "-----------------" << std::endl;
}

int main() { // The main function where program execution begins.

    std::cout << "--- Calling printGreeting() ---" << std::endl;
    printGreeting(); // Call the void function.

    std::cout << "\n--- Calling greetUser() ---" << std::endl;
    greetUser("Alice"); // Call with a string argument.
    std::string userName = "Bob";
    greetUser(userName); // Call with a string variable.

    std::cout << "\n--- Calling incrementByOne() ---" << std::endl;
    int myValue = 10;
    std::cout << "myValue in main before call: " << myValue << std::endl; // Output: 10
    incrementByOne(myValue); // Pass myValue by reference.
    std::cout << "myValue in main after call: " << myValue << std::endl;  // Output: 11 (modified)

    std::cout << "\n--- Calling displayMenu() ---" << std::endl;
    displayMenu(); // Call the menu display function.

    // Key points about void functions:
    // - They do not use a 'return' statement to send a value back.
    // - They can still have 'return;' statements to exit early from the function.
    // - They are used for tasks that involve printing, modifying global variables,
    //   or modifying parameters passed by reference/pointer.

    return 0; // Indicate successful program execution.
}
