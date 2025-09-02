// 00_Introduction/hello_world.cpp
// This program demonstrates the basic structure of a C++ program
// and prints "Hello, World!" to the console.

#include <iostream> // This line includes the iostream library, which provides
                    // input/output functionalities like printing to the console.

int main() { // The main function is the entry point of every C++ program.
             // Execution begins here.
            for (int x = 0; x < 5; x++) // A for loop that iterates 5 times.
            { 
                std::cout << "Hello, World! for " << x << std::endl; // std::cout is used to print output to the console.
            }

    return 0; // Returning 0 from main indicates that the program executed successfully.
}
