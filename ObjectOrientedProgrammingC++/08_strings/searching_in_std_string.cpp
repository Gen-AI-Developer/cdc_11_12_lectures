// 08_strings/searching_in_std_string.cpp
// This program demonstrates various methods for searching within `std::string` objects in C++.
// `std::string` provides functions like `find()`, `rfind()`, `find_first_of()`, etc., for this purpose.

#include <iostream> // For input/output operations.
#include <string>   // For using std::string.

int main() { // The main function where program execution begins.

    std::string text = "The quick brown fox jumps over the lazy dog.";
    std::string pattern1 = "fox";
    std::string pattern2 = "cat";
    std::string chars_to_find = "aeiou"; // Vowels

    std::cout << "Original text: \"" << text << "\"" << std::endl;

    // --- 1. find() method ---
    // Searches for the first occurrence of a substring or character.
    // Returns the starting index of the first match, or std::string::npos if not found.
    std::cout << "\n--- find() method ---" << std::endl;

    size_t pos = text.find(pattern1); // Search for "fox"
    if (pos != std::string::npos) {
        std::cout << "'" << pattern1 << "' found at index: " << pos << std::endl; // Output: 16
    } else {
        std::cout << "'" << pattern1 << "' not found." << std::endl;
    }

    pos = text.find(pattern2); // Search for "cat"
    if (pos != std::string::npos) {
        std::cout << "'" << pattern2 << "' found at index: " << pos << std::endl;
    } else {
        std::cout << "'" << pattern2 << "' not found." << std::endl; // Output: 'cat' not found.
    }

    // find() can also start searching from a specific position.
    pos = text.find("the", 0); // Find first "the"
    std::cout << "First 'the' found at: " << pos << std::endl; // Output: 0
    pos = text.find("the", pos + 1); // Find next "the" after the first one.
    std::cout << "Second 'the' found at: " << pos << std::endl; // Output: 31

    // --- 2. rfind() method ---
    // Searches for the last occurrence of a substring or character.
    // Returns the starting index of the last match, or std::string::npos if not found.
    std::cout << "\n--- rfind() method ---" << std::endl;

    pos = text.rfind("the"); // Search for the last "the"
    if (pos != std::string::npos) {
        std::cout << "Last 'the' found at index: " << pos << std::endl; // Output: 31
    } else {
        std::cout << "'the' not found." << std::endl;
    }

    // --- 3. find_first_of() method ---
    // Searches for the first occurrence of any character from a specified set of characters.
    std::cout << "\n--- find_first_of() method ---" << std::endl;

    pos = text.find_first_of(chars_to_find); // Find first vowel
    if (pos != std::string::npos) {
        std::cout << "First vowel ('" << text[pos] << "') found at index: " << pos << std::endl; // Output: 'e' at 1
    } else {
        std::cout << "No vowels found." << std::endl;
    }

    // --- 4. find_last_of() method ---
    // Searches for the last occurrence of any character from a specified set of characters.
    std::cout << "\n--- find_last_of() method ---" << std::endl;

    pos = text.find_last_of(chars_to_find); // Find last vowel
    if (pos != std::string::npos) {
        std::cout << "Last vowel ('" << text[pos] << "') found at index: " << pos << std::endl; // Output: 'o' at 41
    } else {
        std::cout << "No vowels found." << std::endl;
    }

    // --- 5. find_first_not_of() and find_last_not_of() ---
    // These search for the first/last character NOT in the specified set.
    std::string whitespace = " \t\n\r"; // Space, tab, newline, carriage return
    pos = text.find_first_not_of(whitespace); // Find first non-whitespace character
    std::cout << "\nFirst non-whitespace char at: " << pos << std::endl; // Output: 0

    pos = text.find_last_not_of(whitespace); // Find last non-whitespace character
    std::cout << "Last non-whitespace char at: " << pos << std::endl; // Output: 42 (g of dog)

    return 0; // Indicate successful program execution.
}
