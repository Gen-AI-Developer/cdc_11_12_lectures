// 09_Functions/function_with_return_value.cpp
// This program demonstrates functions that return a value in C++.
// Functions can perform a computation and then send a result back to the caller using a 'return' statement.

#include <iostream> // Include the iostream library for input/output operations.

// --- Function that returns an integer ---
// This function takes two integers, calculates their sum, and returns the sum.
int add(int a, int b) { 
    int sum = a + b;
    return sum; // The 'return' statement sends the value of 'sum' back to the caller.
}

// --- Function that returns a double ---
// This function calculates the area of a circle given its radius.
double calculateCircleArea(double radius) {
    const double PI = 3.14159;
    double area = PI * radius * radius;
    return area;
}

// --- Function that returns a boolean ---
// This function checks if a given number is prime.
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime.
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself, it's not prime.
        }
    }
    return true; // If no divisors found, it's prime.
}

int main() { // The main function where program execution begins.

    std::cout << "--- Calling add() function ---" << std::endl;
    int result1 = add(10, 5); // Call add() and store the returned value in result1.
    std::cout << "Result of add(10, 5): " << result1 << std::endl; // Output: 15

    int num1 = 20, num2 = 15;
    int result2 = add(num1, num2); // Call with variables.
    std::cout << "Result of add(" << num1 << ", " << num2 << "): " << result2 << std::endl; // Output: 35

    std::cout << "\n--- Calling calculateCircleArea() function ---" << std::endl;
    double radius1 = 5.0;
    double area1 = calculateCircleArea(radius1);
    std::cout << "Area of circle with radius " << radius1 << ": " << area1 << std::endl; // Output: ~78.53975

    std::cout << "\n--- Calling isPrime() function ---" << std::endl;
    int testNum1 = 7;
    if (isPrime(testNum1)) {
        std::cout << testNum1 << " is a prime number." << std::endl;
    } else {
        std::cout << testNum1 << " is not a prime number." << std::endl;
    }

    int testNum2 = 10;
    if (isPrime(testNum2)) {
        std::cout << testNum2 << " is a prime number." << std::endl;
    } else {
        std::cout << testNum2 << " is not a prime number." << std::endl;
    }

    // Key points about return values:
    // - The 'return' statement terminates the function execution and sends a value back to the caller.
    // - The data type of the returned value must match the function's declared return type.
    // - A function can have multiple 'return' statements, but only one will be executed.

    return 0; // Indicate successful program execution of main().
}
