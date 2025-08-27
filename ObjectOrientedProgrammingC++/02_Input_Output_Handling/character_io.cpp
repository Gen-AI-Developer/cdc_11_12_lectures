// 02_Input_Output_Handling/character_io.cpp
// This program demonstrates character-level input and output operations in C++.

#include <iostream> // Required for basic input/output operations.

int main() { // The main function where program execution begins.

    char ch;

    // --- 1. Reading a single character using std::cin.get() ---
    std::cout << "Enter a character using cin.get(): ";
    ch = std::cin.get(); // Reads a single character, including whitespace.
    std::cout << "You entered: ";
    std::cout.put(ch); // Outputs a single character.
    std::cout << std::endl;

    // Clear the input buffer for the next input operation.
    // This is important because cin.get() leaves the newline character in the buffer.
    std::cin.ignore(100, '\n'); // Ignores up to 100 characters or until a newline is found.

    // --- 2. Reading a single character using std::cin >> char ---
    // Note: std::cin >> char skips leading whitespace characters (spaces, tabs, newlines).
    std::cout << "Enter another character using cin >> char: ";
    std::cin >> ch;
    std::cout << "You entered: " << ch << std::endl;

    // Clear the input buffer again.
    std::cin.ignore(100, '\n');

    // --- 3. Reading a raw buffer of characters using std::cin.read() ---
    // This is more advanced and less commonly used for simple character input.
    // It reads a specified number of characters directly into a character array.
    char buffer[20]; // Declare a character array (buffer) to store input.
    std::cout << "Enter up to 19 characters for cin.read(): ";
    // Read up to 19 characters (leaving space for null terminator if treated as a string).
    std::cin.read(buffer, 19);
    buffer[std::cin.gcount()] = '\0'; // Null-terminate the buffer to treat it as a C-style string.
                                     // std::cin.gcount() returns the number of characters actually read.
    std::cout << "You read: " << buffer << std::endl;

    // Clear the input buffer.
    std::cin.ignore(100, '\n');

    // --- 4. Writing a single character using std::cout.put() (already shown above) ---
    // Let's demonstrate it again with a direct character.
    std::cout << "Outputting 'X' using cout.put(): ";
    std::cout.put('X');
    std::cout << std::endl;

    return 0; // Indicate successful program execution.
}
