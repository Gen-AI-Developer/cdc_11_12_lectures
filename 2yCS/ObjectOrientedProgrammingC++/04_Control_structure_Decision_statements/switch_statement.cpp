// 04_Control_structure_Decision_statements/switch_statement.cpp
// This program demonstrates the 'switch' statement in C++.
// The 'switch' statement is a multi-way decision statement that provides an easy way
// to dispatch execution to different parts of code based on the value of an expression.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    int dayOfWeek; // Declare an integer variable to store the day number.

    std::cout << "Enter a number (1-7) for the day of the week: "; // Prompt for input.
    std::cin >> dayOfWeek; // Read the day number.

    // --- 1. Basic switch statement for days of the week ---
    // The expression (dayOfWeek) is evaluated, and its value is compared with the 'case' labels.
    // If a match is found, the code block associated with that case is executed.
    switch (dayOfWeek) {
        case 1: // If dayOfWeek is 1
            std::cout << "It's Monday." << std::endl;
            break; // 'break' statement is crucial to exit the switch block after a match.
                   // Without 'break', execution would "fall through" to the next case.
        case 2: // If dayOfWeek is 2
            std::cout << "It's Tuesday." << std::endl;
            break;
        case 3: // If dayOfWeek is 3
            std::cout << "It's Wednesday." << std::endl;
            break;
        case 4: // If dayOfWeek is 4
            std::cout << "It's Thursday." << std::endl;
            break;
        case 5: // If dayOfWeek is 5
            std::cout << "It's Friday." << std::endl;
            break;
        case 6: // If dayOfWeek is 6
            std::cout << "It's Saturday." << std::endl;
            break;
        case 7: // If dayOfWeek is 7
            std::cout << "It's Sunday." << std::endl;
            break;
        default: // The 'default' case is optional and executes if no other case matches.
            std::cout << "Invalid day number. Please enter a number between 1 and 7." << std::endl;
            break;
    }

    // --- 2. Switch statement with character input ---
    char choice;
    std::cout << "\nEnter a character (a, b, or c): ";
    std::cin >> choice;

    switch (choice) {
        case 'a':
        case 'A': // Multiple case labels can share the same code block (fall-through without break).
            std::cout << "You chose A." << std::endl;
            break;
        case 'b':
        case 'B':
            std::cout << "You chose B." << std::endl;
            break;
        case 'c':
        case 'C':
            std::cout << "You chose C." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    // Key points about switch:
    // - The expression in switch must evaluate to an integer type (int, char, enum, etc.).
    // - Case labels must be constant integer expressions.
    // - 'break' statements are essential to prevent fall-through.
    // - 'default' is optional.

    return 0; // Indicate successful program execution.
}
