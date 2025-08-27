// 00_Introduction/hello_world.cpp
// This program demonstrates the basic structure of a C++ program
// and prints "Hello, World!" to the console.

#include <iostream> // This line includes the iostream library, which provides
                    // input/output functionalities like printing to the console.

int main() { // The main function is the entry point of every C++ program.
             // Execution begins here.

    std::cout << "Hello, World!" << std::endl; // std::cout is used to print output to the console.
                                              // "Hello, World!" is the string literal to be printed.
                                              // std::endl inserts a newline character and flushes the output buffer.

    return 0; // Returning 0 from main indicates that the program executed successfully.
}
