// 08_strings/std_string_comparison.cpp
// This program demonstrates various ways to compare `std::string` objects in C++.
// `std::string` provides overloaded operators and member functions for robust string comparison.

#include <iostream> // For input/output operations.
#include <string>   // For using std::string.

int main() { // The main function where program execution begins.

    std::string s1 = "apple";
    std::string s2 = "banana";
    std::string s3 = "apple";
    std::string s4 = "Apple"; // Different case

    std::cout << "s1: \"" << s1 << "\"" << std::endl;
    std::cout << "s2: \"" << s2 << "\"" << std::endl;
    std::cout << "s3: \"" << s3 << "\"" << std::endl;
    std::cout << "s4: \"" << s4 << "\"" << std::endl;

    // --- 1. Using Relational Operators (==, !=, <, >, <=, >=) ---
    // These operators perform lexicographical (dictionary-order) comparison.
    // They return a boolean value (true/false).
    std::cout << "\n--- Relational Operator Comparisons ---" << std::endl;
    std::cout << "s1 == s3: " << (s1 == s3 ? "true" : "false") << std::endl; // Output: true
    std::cout << "s1 == s2: " << (s1 == s2 ? "true" : "false") << std::endl; // Output: false
    std::cout << "s1 != s2: " << (s1 != s2 ? "true" : "false") << std::endl; // Output: true
    std::cout << "s1 < s2: " << (s1 < s2 ? "true" : "false") << std::endl;   // Output: true (apple comes before banana)
    std::cout << "s2 > s1: " << (s2 > s1 ? "true" : "false") << std::endl;   // Output: true
    std::cout << "s1 <= s3: " << (s1 <= s3 ? "true" : "false") << std::endl; // Output: true
    std::cout << "s1 < s4: " << (s1 < s4 ? "true" : "false") << std::endl;   // Output: false (ASCII 'a' > 'A')

    // --- 2. Using compare() method ---
    // The compare() method returns:
    //   0 if the strings are equal.
    //   A negative value if the first string is lexicographically smaller.
    //   A positive value if the first string is lexicographically larger.
    std::cout << "\n--- compare() method Comparisons ---" << std::endl;
    std::cout << "s1.compare(s3): " << s1.compare(s3) << std::endl; // Output: 0
    std::cout << "s1.compare(s2): " << s1.compare(s2) << std::endl; // Output: a negative value
    std::cout << "s2.compare(s1): " << s2.compare(s1) << std::endl; // Output: a positive value
    std::cout << "s1.compare(s4): " << s1.compare(s4) << std::endl; // Output: a positive value (s1 is 'larger' due to 'a' vs 'A')

    // compare() can also compare substrings or C-style strings.
    std::string part = "app";
    // Compare s1 (from index 0, length 3) with part
    std::cout << "s1.compare(0, 3, part): " << s1.compare(0, 3, part) << std::endl; // Output: 0

    // --- 3. Comparing with C-style strings ---
    // std::string objects can be directly compared with C-style string literals or char arrays.
    std::cout << "\n--- Comparing with C-style strings ---" << std::endl;
    std::cout << "s1 == \"apple\": " << (s1 == "apple" ? "true" : "false") << std::endl; // Output: true
    std::cout << "s1 < \"zebra\": " << (s1 < "zebra" ? "true" : "false") << std::endl; // Output: true

    // Important: For case-insensitive comparison, you would typically convert both strings
    // to the same case (e.g., lowercase) before comparing, or use a custom comparison function.

    return 0; // Indicate successful program execution.
}
