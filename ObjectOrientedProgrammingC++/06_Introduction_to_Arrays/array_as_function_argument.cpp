// 06_Introduction_to_Arrays/array_as_function_argument.cpp
// This program demonstrates how to pass one-dimensional arrays to functions in C++.
// When an array is passed to a function, it is typically passed by reference (or more accurately, as a pointer to its first element).
// This means changes made to the array inside the function will affect the original array.

#include <iostream> // Include the iostream library for input/output operations.

// Function to print array elements
// Arrays are passed as a pointer to their first element, along with their size.
void printArray(int arr[], int size) { // 'int arr[]' is equivalent to 'int* arr'
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to modify array elements
void modifyArray(int arr[], int size) {
    std::cout << "Modifying array elements (doubling each value)..." << std::endl;
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2; // Modify the element at current index.
    }
}

// Function to calculate the sum of array elements
int calculateSum(const int arr[], int size) { // Using 'const' to indicate that the function will not modify the array.
                                             // This is good practice for functions that only read from the array.
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() { // The main function where program execution begins.

    const int SIZE = 5; // Define a constant for array size.
    int myNumbers[SIZE] = {1, 2, 3, 4, 5}; // Declare and initialize an integer array.

    std::cout << "--- Before function calls ---" << std::endl;
    printArray(myNumbers, SIZE); // Call printArray to display original array.

    // --- Call modifyArray function ---
    modifyArray(myNumbers, SIZE); // Pass the array and its size to modifyArray.
    std::cout << "\n--- After modifyArray call ---" << std::endl;
    printArray(myNumbers, SIZE); // Print again to see the modified values.

    // --- Call calculateSum function ---
    int totalSum = calculateSum(myNumbers, SIZE); // Pass the array and its size to calculateSum.
    std::cout << "\nSum of array elements: " << totalSum << std::endl; // Output the calculated sum.

    // Important notes on passing arrays to functions:
    // - Arrays decay into pointers to their first element when passed to functions.
    // - The function does not know the size of the array, so you must pass the size separately.
    // - Changes made to the array inside the function are reflected in the original array in the caller.
    // - Use 'const' keyword for arrays in function parameters if the function should not modify the array.

    return 0; // Indicate successful program execution.
}
