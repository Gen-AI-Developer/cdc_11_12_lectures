// 03_Operators_in_Cpp/sizeof_operator.cpp
// This program demonstrates the use of the sizeof operator in C++.
// The sizeof operator returns the size, in bytes, of a variable or a data type.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for std::string.

int main() { // The main function where program execution begins.

    // --- 1. Size of fundamental data types ---
    std::cout << "Size of fundamental data types (in bytes):" << std::endl;
    std::cout << "  sizeof(char): " << sizeof(char) << std::endl;         // Typically 1 byte
    std::cout << "  sizeof(short): " << sizeof(short) << std::endl;       // Typically 2 bytes
    std::cout << "  sizeof(int): " << sizeof(int) << std::endl;           // Typically 4 bytes
    std::cout << "  sizeof(long): " << sizeof(long) << std::endl;         // Typically 4 or 8 bytes
    std::cout << "  sizeof(long long): " << sizeof(long long) << std::endl; // Typically 8 bytes
    std::cout << "  sizeof(float): " << sizeof(float) << std::endl;       // Typically 4 bytes
    std::cout << "  sizeof(double): " << sizeof(double) << std::endl;     // Typically 8 bytes
    std::cout << "  sizeof(long double): " << sizeof(long double) << std::endl; // Typically 8, 12, or 16 bytes
    std::cout << "  sizeof(bool): " << sizeof(bool) << std::endl;         // Typically 1 byte

    // --- 2. Size of variables ---
    int myInt = 10;
    double myDouble = 3.14;
    char myChar = 'A';
    bool myBool = true;
    std::string myString = "Hello World"; // std::string is a class, its size can vary.

    std::cout << "\nSize of variables (in bytes):" << std::endl;
    std::cout << "  sizeof(myInt): " << sizeof(myInt) << std::endl;
    std::cout << "  sizeof(myDouble): " << sizeof(myDouble) << std::endl;
    std::cout << "  sizeof(myChar): " << sizeof(myChar) << std::endl;
    std::cout << "  sizeof(myBool): " << sizeof(myBool) << std::endl;
    // The size of std::string object itself (not the string data it holds) is typically fixed.
    // The actual string data is stored dynamically on the heap.
    std::cout << "  sizeof(myString): " << sizeof(myString) << std::endl; 

    // --- 3. Size of arrays ---
    int intArray[5]; // An array of 5 integers.
    std::cout << "\nSize of arrays (in bytes):" << std::endl;
    std::cout << "  sizeof(intArray): " << sizeof(intArray) << std::endl; // Output: 5 * sizeof(int)
    std::cout << "  Number of elements in intArray: " << sizeof(intArray) / sizeof(intArray[0]) << std::endl; // A common way to get array size.

    char charArray[] = "C++"; // C-style string, null-terminated. Size includes null terminator.
    std::cout << "  sizeof(charArray): " << sizeof(charArray) << std::endl; // Output: 4 (C, +, +, \0)

    // --- 4. Size of pointers ---
    int* ptrInt = &myInt;
    double* ptrDouble = &myDouble;

    std::cout << "\nSize of pointers (in bytes):" << std::endl;
    // The size of a pointer is typically constant for a given architecture (e.g., 4 bytes on 32-bit, 8 bytes on 64-bit).
    std::cout << "  sizeof(ptrInt): " << sizeof(ptrInt) << std::endl;
    std::cout << "  sizeof(ptrDouble): " << sizeof(ptrDouble) << std::endl;

    // The sizeof operator is a compile-time operator, meaning its result is determined at compile time,
    // not at runtime. It's very useful for memory management and understanding data structures.

    return 0; // Indicate successful program execution.
}
