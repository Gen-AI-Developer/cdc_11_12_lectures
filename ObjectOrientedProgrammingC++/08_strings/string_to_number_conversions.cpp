// 08_strings/string_to_number_conversions.cpp
// This program demonstrates how to convert strings to numeric types and vice-versa in C++.
// Modern C++ (C++11 and later) provides `std::stoi`, `std::stof`, `std::to_string`, etc.,
// for these conversions, which are generally safer and more convenient than older C-style functions.

#include <iostream> // For input/output operations.
#include <string>   // For using std::string and conversion functions.
#include <limits>   // For std::numeric_limits (used with std::cin.ignore).

int main() { // The main function where program execution begins.

    // --- 1. String to Integer (std::stoi) ---
    std::string strInt = "12345";
    std::string strNegativeInt = "-6789";
    std::string strIntWithChars = "100abc"; // stoi will parse until non-digit character.

    int num1 = std::stoi(strInt);
    int num2 = std::stoi(strNegativeInt);
    int num3 = std::stoi(strIntWithChars); // Parses "100"

    std::cout << "--- String to Integer (std::stoi) ---" << std::endl;
    std::cout << "String \"" << strInt << "\" to int: " << num1 << std::endl;         // Output: 12345
    std::cout << "String \"" << strNegativeInt << "\" to int: " << num2 << std::endl; // Output: -6789
    std::cout << "String \"" << strIntWithChars << "\" to int: " << num3 << std::endl; // Output: 100

    // Error handling for stoi (e.g., if string is not a valid number)
    std::string invalidStr = "hello";
    try {
        // int invalidNum = std::stoi(invalidStr); // This would throw std::invalid_argument
        // std::cout << "String \"" << invalidStr << "\" to int: " << invalidNum << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error converting \"" << invalidStr << "\" to int: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error (out of range) converting \"" << invalidStr << "\" to int: " << e.what() << std::endl;
    }

    // --- 2. String to Floating-point (std::stof, std::stod, std::stold) ---
    std::string strFloat = "3.14159";
    std::string strDouble = "-123.456e-2";

    float f_val = std::stof(strFloat);
    double d_val = std::stod(strDouble);

    std::cout << "\n--- String to Floating-point (std::stof, std::stod) ---" << std::endl;
    std::cout << "String \"" << strFloat << "\" to float: " << f_val << std::endl;   // Output: 3.14159
    std::cout << "String \"" << strDouble << "\" to double: " << d_val << std::endl; // Output: -1.23456

    // --- 3. Number to String (std::to_string) ---
    int intVal = 42;
    double doubleVal = 98.765;
    long long llVal = 123456789012345LL;

    std::string s_from_int = std::to_string(intVal);
    std::string s_from_double = std::to_string(doubleVal);
    std::string s_from_ll = std::to_string(llVal);

    std::cout << "\n--- Number to String (std::to_string) ---" << std::endl;
    std::cout << "Int " << intVal << " to string: \"" << s_from_int << "\"" << std::endl;
    std::cout << "Double " << doubleVal << " to string: \"" << s_from_double << "\"" << std::endl;
    std::cout << "Long long " << llVal << " to string: \"" << s_from_ll << "\"" << std::endl;

    // --- Older C-style conversions (e.g., atoi, atof, sprintf) ---
    // These are generally discouraged in modern C++ due to lack of type safety and error handling.
    // Example (not recommended for new code):
    // int old_int = atoi("123");
    // double old_double = atof("45.67");
    // char buffer[50];
    // sprintf(buffer, "Value: %d", 100);
    // std::cout << "C-style conversion: " << buffer << std::endl;

    return 0; // Indicate successful program execution.
}
