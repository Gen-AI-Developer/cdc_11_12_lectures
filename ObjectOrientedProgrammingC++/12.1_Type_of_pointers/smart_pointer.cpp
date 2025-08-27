// 12.1_Type_of_pointers/smart_pointer.cpp
// This program demonstrates the use of smart pointers in C++.

#include <iostream>
#include <memory> // Include memory header for smart pointers

int main() {
    // Unique Pointer
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(42);
    std::cout << "Unique Pointer Value: " << *uniquePtr << std::endl;

    // Shared Pointer
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(100);
    std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Shared ownership
    std::cout << "Shared Pointer Value: " << *sharedPtr1 << std::endl;

    // Weak Pointer
    std::weak_ptr<int> weakPtr = sharedPtr1;
    if (auto shared = weakPtr.lock()) {
        std::cout << "Weak Pointer Value: " << *shared << std::endl;
    } else {
        std::cout << "Weak Pointer is expired." << std::endl;
    }

    return 0;
}
