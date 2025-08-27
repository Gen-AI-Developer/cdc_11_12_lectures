// 12.1_Type_of_pointers/wild_pointer.cpp
// This program demonstrates the concept of a wild pointer in C++.

#include <iostream>

int main() {
    int* ptr; // Uninitialized pointer (wild pointer)

    // Accessing a wild pointer (undefined behavior)
    std::cout << "Wild pointer value: " << *ptr << std::endl;

    return 0;
}
