// 08_strings/std_string_operations.cpp
// This program demonstrates various common operations and member functions of `std::string` in C++.

#include <iostream> // For input/output operations.
#include <string>   // For using std::string.
#include <vector>   // For std::vector (used in some advanced string processing, not directly here).

int main() { // The main function where program execution begins.

    std::string s = "Programming";
    std::string s_empty;

    std::cout << "Initial string s: \"" << s << "\"" << std::endl;
    std::cout << "Initial string s_empty: \"" << s_empty << "\"" << std::endl;

    // --- 1. Length and Size ---
    // length() and size() return the number of characters in the string.
    std::cout << "\n--- Length and Size ---" << std::endl;
    std::cout << "Length of s: " << s.length() << std::endl; // Output: 11
    std::cout << "Size of s: " << s.size() << std::endl;     // Output: 11

    // --- 2. Checking if Empty ---
    // empty() returns true if the string is empty, false otherwise.
    std::cout << "\n--- Empty Check ---" << std::endl;
    std::cout << "s is empty? " << (s.empty() ? "Yes" : "No") << std::endl;         // Output: No
    std::cout << "s_empty is empty? " << (s_empty.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // --- 3. Appending Strings ---
    std::cout << "\n--- Appending Strings ---" << std::endl;
    s.append(" in C++"); // Appends another string.
    std::cout << "s after append: \"" << s << "\"" << std::endl; // Output: Programming in C++

    s += " is fun!"; // Using += operator for concatenation.
    std::cout << "s after +=: \"" << s << "\"" << std::endl;     // Output: Programming in C++ is fun!

    // --- 4. Character Manipulation (push_back, pop_back) ---
    std::cout << "\n--- Character Manipulation ---" << std::endl;
    s.push_back('!'); // Adds a character to the end.
    std::cout << "s after push_back('!'): \"" << s << "\"" << std::endl; // Output: Programming in C++ is fun!!

    if (!s.empty()) {
        s.pop_back(); // Removes the last character.
    }
    std::cout << "s after pop_back(): \"" << s << "\"" << std::endl; // Output: Programming in C++ is fun!

    // --- 5. Accessing Characters (at(), []) ---
    std::cout << "\n--- Character Access ---" << std::endl;
    std::cout << "Character at index 0 (s.at(0)): " << s.at(0) << std::endl; // Output: P
    std::cout << "Character at index 1 (s[1]): " << s[1] << std::endl;       // Output: r

    // front() and back() (C++11 and later) for first and last characters.
    if (!s.empty()) {
        std::cout << "First character (s.front()): " << s.front() << std::endl; // Output: P
        std::cout << "Last character (s.back()): " << s.back() << std::endl;   // Output: !
    }

    // --- 6. Inserting and Erasing ---
    std::cout << "\n--- Inserting and Erasing ---" << std::endl;
    s.insert(0, "Awesome "); // Insert "Awesome " at the beginning (index 0).
    std::cout << "s after insert: \"" << s << "\"" << std::endl; // Output: Awesome Programming in C++ is fun!

    s.erase(0, 8); // Erase 8 characters starting from index 0.
    std::cout << "s after erase: \"" << s << "\"" << std::endl; // Output: Programming in C++ is fun!

    // --- 7. Clearing a string ---
    std::cout << "\n--- Clearing String ---" << std::endl;
    s_empty = "Some text";
    std::cout << "s_empty before clear: \"" << s_empty << "\"" << std::endl;
    s_empty.clear(); // Clears the content of the string.
    std::cout << "s_empty after clear: \"" << s_empty << "\" (empty: " << (s_empty.empty() ? "Yes" : "No") << ")" << std::endl;

    return 0; // Indicate successful program execution.
}
