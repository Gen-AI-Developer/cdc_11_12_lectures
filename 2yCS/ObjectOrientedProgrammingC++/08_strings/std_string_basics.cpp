// 08_strings/std_string_basics.cpp
// This program demonstrates the basic usage of `std::string` in C++.
// `std::string` is a class from the Standard Library that provides a much safer and more convenient
// way to handle strings compared to C-style character arrays.

#include <iostream> // For input/output operations.
#include <string>   // For using std::string.

int main() { // The main function where program execution begins.

    // --- 1. Declaration and Initialization ---

    // a) Default initialization (empty string).
    std::string s1; 
    std::cout << "s1 (empty): \"" << s1 << "\"" << std::endl;

    // b) Initialization with a string literal.
    std::string s2 = "Hello, C++!"; 
    std::cout << "s2: \"" << s2 << "\"" << std::endl;

    // c) Copy initialization from another std::string.
    std::string s3 = s2; 
    std::cout << "s3 (copy of s2): \"" << s3 << "\"" << std::endl;

    // d) Initialization with a C-style string.
    const char* c_str = "Learning std::string";
    std::string s4 = c_str; 
    std::cout << "s4 (from C-style string): \"" << s4 << "\"" << std::endl;

    // e) Initialization with a specific number of characters.
    std::string s5(5, 'X'); // Creates a string with 5 'X' characters.
    std::cout << "s5 (5 X's): \"" << s5 << "\"" << std::endl;

    // --- 2. Inputting std::string ---

    // a) Reading a single word (stops at whitespace) using operator>>.
    std::string firstName;
    std::cout << "\nEnter your first name: ";
    std::cin >> firstName;
    std::cout << "Hello, " << firstName << "!" << std::endl;

    // IMPORTANT: Clear the input buffer after `std::cin >>` if you plan to use `std::getline` next.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Requires <limits> header.

    // b) Reading an entire line (including spaces) using std::getline().
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Your full name is: " << fullName << std::endl;

    // --- 3. String Concatenation ---

    // a) Using the + operator.
    std::string part1 = "Good";
    std::string part2 = " Morning";
    std::string greetingMsg = part1 + part2 + "!";
    std::cout << "\nConcatenated string: " << greetingMsg << std::endl; // Output: Good Morning!

    // b) Using the += operator.
    std::string message = "Welcome";
    message += " to C++";
    std::cout << "Message after +=: " << message << std::endl; // Output: Welcome to C++

    // --- 4. Accessing Characters ---

    // a) Using the [] operator (no bounds checking).
    std::cout << "\nFirst character of s2 (s2[0]): " << s2[0] << std::endl; // Output: H
    std::cout << "Last character of s2 (s2[s2.length()-1]): " << s2[s2.length()-1] << std::endl; // Output: !

    // b) Using the at() method (with bounds checking, throws std::out_of_range if out of bounds).
    try {
        std::cout << "Character at index 1 of s2 (s2.at(1)): " << s2.at(1) << std::endl; // Output: e
        // std::cout << s2.at(100) << std::endl; // This would throw an exception.
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // `std::string` automatically manages memory, grows as needed, and provides many useful member functions.

    return 0; // Indicate successful program execution.
}
