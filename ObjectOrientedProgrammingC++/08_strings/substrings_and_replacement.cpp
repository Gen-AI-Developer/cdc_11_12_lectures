// 08_strings/substrings_and_replacement.cpp
// This program demonstrates how to extract substrings and replace parts of `std::string` objects in C++.
// `std::string` provides `substr()` for extracting and `replace()` for modifying parts of a string.

#include <iostream> // For input/output operations.
#include <string>   // For using std::string.

int main() { // The main function where program execution begins.

    std::string mainString = "Hello, world! Welcome to C++ programming.";
    std::cout << "Original string: \"" << mainString << "\"" << std::endl;

    // --- 1. substr() method ---
    // Syntax: string.substr(pos, len);
    //   pos: The starting position (index) of the substring.
    //   len: The length of the substring to extract. If omitted, extracts until the end of the string.
    std::cout << "\n--- Substring Extraction (substr()) ---" << std::endl;

    // Extract "world"
    std::string sub1 = mainString.substr(7, 5); 
    std::cout << "Substring from index 7, length 5: \"" << sub1 << "\"" << std::endl; // Output: world

    // Extract "C++ programming."
    std::string sub2 = mainString.substr(23); // From index 23 to the end.
    std::cout << "Substring from index 23 to end: \"" << sub2 << "\"" << std::endl; // Output: C++ programming.

    // Extract "Hello"
    std::string sub3 = mainString.substr(0, 5);
    std::cout << "Substring from index 0, length 5: \"" << sub3 << "\"" << std::endl; // Output: Hello

    // Handling out-of-bounds length (substr will adjust to end of string)
    std::string sub4 = mainString.substr(7, 100); // Length 100 is too long, it will go to the end.
    std::cout << "Substring from index 7, length 100: \"" << sub4 << "\"" << std::endl; // Output: world! Welcome to C++ programming.

    // --- 2. replace() method ---
    // Syntax: string.replace(pos, len, new_string);
    //   pos: The starting position (index) where replacement begins.
    //   len: The number of characters to replace.
    //   new_string: The string to insert in place of the replaced characters.
    std::cout << "\n--- String Replacement (replace()) ---" << std::endl;

    std::string replaceableString = "This is a test string.";
    std::cout << "Original replaceable string: \"" << replaceableString << "\"" << std::endl;

    // Replace "test" with "sample"
    replaceableString.replace(10, 4, "sample"); // Replace 4 chars at index 10 with "sample".
    std::cout << "After replacing \"test\" with \"sample\": \"" << replaceableString << "\"" << std::endl; // Output: This is a sample string.

    // Replace "is a" with "was an excellent"
    replaceableString.replace(5, 4, "was an excellent"); // Replace 4 chars at index 5 with "was an excellent".
    std::cout << "After replacing \"is a\" with \"was an excellent\": \"" << replaceableString << "\"" << std::endl; // Output: This was an excellent sample string.

    // Replacing with an empty string (effectively deleting characters)
    replaceableString.replace(5, 17, ""); // Erase "was an excellent"
    std::cout << "After erasing middle part: \"" << replaceableString << "\"" << std::endl; // Output: This sample string.

    // Replacing a part of the string with a C-style string
    replaceableString.replace(5, 6, "great"); // Replace "sample" with "great"
    std::cout << "After replacing \"sample\" with \"great\": \"" << replaceableString << "\"" << std::endl; // Output: This great string.

    // These methods are powerful for parsing, manipulating, and transforming string data.

    return 0; // Indicate successful program execution.
}
