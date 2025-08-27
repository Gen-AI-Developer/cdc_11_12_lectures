// 12_Introduction_to_Pointers/pointer_declaration_initialization.cpp
// This program demonstrates the declaration and initialization of pointers in C++.
// Pointers are variables that store the memory address of another variable.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. Pointer Declaration ---
    // Syntax: dataType* pointerName;
    int* ptr; // Declares a pointer to an integer.

    // --- 2. Pointer Initialization ---
    int num = 42; // Declare an integer variable.
    ptr = &num;   // Initialize the pointer with the address of 'num'.

    std::cout << "--- Pointer Declaration and Initialization ---" << std::endl;
    std::cout << "Value of num: " << num << std::endl;           // Output: 42
    std::cout << "Address of num (&num): " << &num << std::endl; // Output: Address of num
    std::cout << "Value of ptr (address stored in ptr): " << ptr << std::endl; // Output: Address of num

    // --- 3. Dereferencing a Pointer ---
    // Dereferencing a pointer means accessing the value stored at the memory address it points to.
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl; // Output: 42

    // --- 4. Modifying the Value via Pointer ---
    *ptr = 100; // Change the value of 'num' using the pointer.
    std::cout << "Value of num after modification via ptr: " << num << std::endl; // Output: 100

    // --- 5. Null Pointers ---
    // A null pointer is a pointer that does not point to any valid memory address.
    int* nullPtr = nullptr; // Use nullptr (C++11 and later) to initialize a null pointer.
    std::cout << "Value of nullPtr: " << nullPtr << std::endl; // Output: 0 or nullptr

    // --- 6. Dangling Pointers ---
    // A dangling pointer occurs when a pointer points to a memory location that has been deallocated.
    // Example (commented out to avoid undefined behavior):
    // int* danglingPtr;
    // {
    //     int temp = 10;
    //     danglingPtr = &temp; // temp goes out of scope here.
    // }
    // std::cout << *danglingPtr; // Undefined behavior.

    // Key points about pointers:
    // - Always initialize pointers before using them.
    // - Use nullptr to represent a null pointer (do not use uninitialized pointers).
    // - Be cautious of dangling pointers (pointers to deallocated memory).

    return 0; // Indicate successful program execution.
}
