// 03_Operators_in_Cpp/ternary_operator.cpp
// This program demonstrates the use of the ternary (conditional) operator in C++.
// The ternary operator is a shorthand for a simple if-else statement.
// Syntax: condition ? expression_if_true : expression_if_false;

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for using string data type.

int main() { // The main function where program execution begins.

    int score = 75; // Declare and initialize integer variable 'score'.
    std::string result; // Declare a string variable to store the result.

    // --- 1. Basic Ternary Operator Example ---
    // If score is greater than or equal to 60, assign "Pass" to result, otherwise assign "Fail".
    result = (score >= 60) ? "Pass" : "Fail";
    std::cout << "Score: " << score << ", Result: " << result << std::endl; // Output: Score: 75, Result: Pass

    score = 50; // Change score for another example.
    result = (score >= 60) ? "Pass" : "Fail";
    std::cout << "Score: " << score << ", Result: " << result << std::endl; // Output: Score: 50, Result: Fail

    // --- 2. Ternary Operator with direct output ---
    int num1 = 15;
    int num2 = 25;
    int max = (num1 > num2) ? num1 : num2; // Find the maximum of two numbers.
    std::cout << "\nMaximum of " << num1 << " and " << num2 << " is: " << max << std::endl; // Output: Maximum of 15 and 25 is: 25

    std::cout << "Is " << num1 << " even? " << ((num1 % 2 == 0) ? "Yes" : "No") << std::endl; // Output: Is 15 even? No

    // --- 3. Nested Ternary Operator (use with caution for readability) ---
    int grade = 85;
    std::string gradeLetter = (grade >= 90) ? "A" : 
                              (grade >= 80) ? "B" : 
                              (grade >= 70) ? "C" : 
                              (grade >= 60) ? "D" : "F";
    std::cout << "\nGrade " << grade << " corresponds to letter: " << gradeLetter << std::endl; // Output: Grade 85 corresponds to letter: B

    grade = 55;
    gradeLetter = (grade >= 90) ? "A" : 
                  (grade >= 80) ? "B" : 
                  (grade >= 70) ? "C" : 
                  (grade >= 60) ? "D" : "F";
    std::cout << "Grade " << grade << " corresponds to letter: " << gradeLetter << std::endl; // Output: Grade 55 corresponds to letter: F

    // The ternary operator is best used for simple conditional assignments or expressions
    // where an if-else statement would be overly verbose.

    return 0; // Indicate successful program execution.
}
