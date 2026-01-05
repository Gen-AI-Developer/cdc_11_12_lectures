// 08_strings/c_style_strings.cpp
// This program demonstrates the use of C-style strings (null-terminated character arrays) in C++.
// While modern C++ prefers `std::string`, understanding C-style strings is important
// as they are fundamental and often used when interacting with C libraries or older codebases.

#include <iostream> // For input/output operations.
#include <cstring>  // For C-style string manipulation functions (strlen, strcpy, strcat, strcmp).

int main() { // The main function where program execution begins.

    // --- 1. Declaration and Initialization ---
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Explicit null termination.
    char word[] = "World"; // Compiler automatically adds null terminator and determines size.
    char name[20]; // Declares a character array to hold up to 19 characters + null terminator.

    std::cout << "Greeting: " << greeting << std::endl; // Output: Hello
    std::cout << "Word: " << word << std::endl;         // Output: World

    // --- 2. Inputting C-style strings ---
    std::cout << "\nEnter your first name (max 19 chars): ";
    std::cin >> name; // Reads a single word (stops at whitespace).
    std::cout << "Hello, " << name << "!" << std::endl;

    // To read a line with spaces, use std::cin.getline() or fgets().
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer.
    char fullName[50];
    std::cout << "Enter your full name (max 49 chars): ";
    std::cin.getline(fullName, 50); // Reads up to 49 characters or until newline.
    std::cout << "Your full name is: " << fullName << std::endl;

    // --- 3. String Length (strlen) ---
    // strlen() returns the number of characters before the null terminator.
    std::cout << "\nLength of 'word': " << strlen(word) << std::endl; // Output: 5
    std::cout << "Length of 'fullName': " << strlen(fullName) << std::endl; // Length of user's full name

    // --- 4. String Copy (strcpy) ---
    // Copies the source string to the destination string.
    // Ensure destination buffer is large enough to prevent buffer overflow.
    char destination[20];
    strcpy(destination, "C++ Programming");
    std::cout << "Copied string: " << destination << std::endl; // Output: C++ Programming

    // --- 5. String Concatenation (strcat) ---
    // Appends the source string to the destination string.
    // Ensure destination buffer has enough space.
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    std::cout << "Concatenated string: " << str1 << std::endl; // Output: Hello, World!

    // --- 6. String Comparison (strcmp) ---
    // Compares two strings lexicographically.
    // Returns 0 if strings are equal, <0 if first string is smaller, >0 if first string is larger.
    char s1[] = "apple";
    char s2[] = "banana";
    char s3[] = "apple";

    std::cout << "\nComparing strings:" << std::endl;
    std::cout << "strcmp(\"apple\", \"banana\"): " << strcmp(s1, s2) << std::endl; // Output: a negative value
    std::cout << "strcmp(\"banana\", \"apple\"): " << strcmp(s2, s1) << std::endl; // Output: a positive value
    std::cout << "strcmp(\"apple\", \"apple\"): " << strcmp(s1, s3) << std::endl; // Output: 0

    if (strcmp(s1, s3) == 0) {
        std::cout << "s1 and s3 are equal." << std::endl;
    }

    // C-style strings require manual memory management and careful handling of buffer sizes.
    // `std::string` (covered next) is generally safer and easier to use.

    return 0; // Indicate successful program execution.
}
