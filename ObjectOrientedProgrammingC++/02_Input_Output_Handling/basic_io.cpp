// 02_Input_Output_Handling/basic_io.cpp
// This program demonstrates basic input and output operations in C++.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for using string data type.

int main() { // The main function where program execution begins.

    // --- Output using std::cout ---
    std::cout << "Hello, C++!" << std::endl; // Print a string literal.
    std::cout << "This is a basic output example." << std::endl; // Another string literal.

    int num = 10; // Declare and initialize an integer variable.
    std::cout << "The value of num is: " << num << std::endl; // Print a variable's value.

    double price = 19.99; // Declare and initialize a double variable.
    std::cout << "The price is: " << price << std::endl; // Print a double variable.

    // --- Input using std::cin ---
    int userInt; // Declare an integer variable to store user input.
    std::cout << "Enter an integer: "; // Prompt the user for input.
    std::cin >> userInt; // Read an integer from the console and store it in userInt.
    std::cout << "You entered: " << userInt << std::endl; // Display the entered integer.

    float userFloat; // Declare a float variable.
    std::cout << "Enter a floating-point number: "; // Prompt for float input.
    std::cin >> userFloat; // Read a float.
    std::cout << "You entered: " << userFloat << std::endl; // Display the entered float.

    char userChar; // Declare a character variable.
    std::cout << "Enter a character: "; // Prompt for character input.
    std::cin >> userChar; // Read a character.
    std::cout << "You entered: " << userChar << std::endl; // Display the entered character.

    // IMPORTANT: When mixing std::cin >> type; with std::getline(),
    // there might be a leftover newline character in the input buffer.
    // To clear it, use std::cin.ignore().
    std::cin.ignore(); // Clear the newline character left by previous std::cin >> operations.

    std::string userName; // Declare a string variable.
    std::cout << "Enter your full name: "; // Prompt for string input.
    std::getline(std::cin, userName); // Read an entire line of text, including spaces.
    std::cout << "Your name is: " << userName << std::endl; // Display the entered name.

    return 0; // Indicate successful program execution.
}
