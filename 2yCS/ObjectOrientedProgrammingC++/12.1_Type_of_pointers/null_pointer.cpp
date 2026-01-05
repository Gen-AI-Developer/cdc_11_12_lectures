// 12.1_Type_of_pointers/null_pointer.cpp
// This program demonstrates the concept of a null pointer in C++.

#include <iostream>

int main() {
    int* ptr = nullptr; // Null pointer initialization

    if (ptr == nullptr) {
        std::cout << "The pointer is null." << std::endl;
    } else {
        std::cout << "The pointer is not null." << std::endl;
    }

    return 0;
}
