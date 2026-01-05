// 12.1_Type_of_pointers/dangling_pointer.cpp
// This program demonstrates the concept of a dangling pointer in C++.

#include <iostream>

int* createDanglingPointer() {
    int temp = 42;
    return &temp; // Returning address of a local variable
}

int main() {
    int* ptr = createDanglingPointer();

    // Accessing the dangling pointer (undefined behavior)
    std::cout << "Dangling pointer value: " << *ptr << std::endl;

    return 0;
}
