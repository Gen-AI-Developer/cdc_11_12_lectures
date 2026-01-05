// 04_Control_structure_Decision_statements/if_else_if_else_ladder.cpp
// This program demonstrates the 'if-else if-else' ladder in C++.
// This structure is used when there are multiple conditions to check sequentially.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int score; // Declare an integer variable to store the student's score.

    std::cout << "Enter the student's score (0-100): "; // Prompt for input.
    std::cin >> score; // Read the score.

    // --- 1. Basic if-else if-else ladder for grading ---
    // The conditions are checked from top to bottom. The first true condition's block is executed,
    // and the rest of the ladder is skipped.
    if (score >= 90) { 
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) { 
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) { 
        std::cout << "Grade: C" << std::endl;
    } else if (score >= 60) { 
        std::cout << "Grade: D" << std::endl;
    } else { // This 'else' block is executed if none of the above 'if' or 'else if' conditions are true.
        std::cout << "Grade: F" << std::endl;
    }

    // --- 2. Another example: checking number sign ---
    int num;
    std::cout << "\nEnter an integer to check its sign: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (num < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    // The order of conditions in an if-else if-else ladder is important.
    // Always place the most specific or restrictive conditions first.

    return 0; // Indicate successful program execution.
}
