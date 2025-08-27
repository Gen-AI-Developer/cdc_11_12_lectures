// 04_Control_structure_Decision_statements/nested_if_else.cpp
// This program demonstrates nested 'if-else' statements in C++.
// Nested if-else means an if-else statement inside another if-else statement.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int num1 = 10, num2 = 20, num3 = 5; // Declare and initialize three integer variables.

    std::cout << "Finding the largest of three numbers:" << std::endl;

    // --- 1. Nested if-else to find the largest of three numbers ---
    if (num1 >= num2) { // Outer if: Check if num1 is greater than or equal to num2.
        if (num1 >= num3) { // Inner if: If num1 >= num2, then check if num1 is also >= num3.
            std::cout << num1 << " is the largest." << std::endl;
        } else { // Inner else: If num1 >= num2 but num1 < num3, then num3 is largest.
            std::cout << num3 << " is the largest." << std::endl;
        }
    } else { // Outer else: If num1 < num2, then num2 is potentially the largest.
        if (num2 >= num3) { // Inner if: If num1 < num2, then check if num2 is also >= num3.
            std::cout << num2 << " is the largest." << std::endl;
        } else { // Inner else: If num1 < num2 and num2 < num3, then num3 is largest.
            std::cout << num3 << " is the largest." << std::endl;
        }
    }

    // --- 2. Another example: checking user authentication and authorization ---
    bool isAuthenticated = true;
    bool isAdmin = false;
    int userLevel = 2; // 1 for basic user, 2 for editor, 3 for admin

    std::cout << "\nChecking user access levels:" << std::endl;

    if (isAuthenticated) {
        std::cout << "User is authenticated." << std::endl;
        if (isAdmin) {
            std::cout << "User is an administrator. Full access granted." << std::endl;
        } else { // Not an admin, check user level
            std::cout << "User is not an administrator. Checking user level..." << std::endl;
            if (userLevel >= 2) {
                std::cout << "User has editor privileges." << std::endl;
            } else {
                std::cout << "User has basic privileges." << std::endl;
            }
        }
    } else {
        std::cout << "User is not authenticated. Access denied." << std::endl;
    }

    // Nested if-else statements can become complex and hard to read if too many levels are used.
    // Consider using logical operators (&&, ||) or switch statements for simpler multi-condition checks.

    return 0; // Indicate successful program execution.
}
