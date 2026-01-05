// 05_Loops_in_CPP/do_while_loop.cpp
// This program demonstrates the 'do-while' loop in C++.
// The 'do-while' loop is an exit-controlled loop, meaning the loop body is executed at least once,
// and then the condition is checked. If the condition is true, the loop continues.

#include <iostream> // Include the iostream library for input/output operations.

int main() { // The main function where program execution begins.

    // --- 1. Basic do-while loop: Counting from 1 to 5 ---
    int count = 1; // Initialization
    std::cout << "Counting from 1 to 5 using do-while loop:" << std::endl;
    do {
        std::cout << count << " "; // Print the current value of count.
        count++; // Update: increment count in each iteration.
    } while (count <= 5); // Condition: loop continues as long as count is less than or equal to 5.
    std::cout << std::endl; // Print a newline at the end.

    // --- 2. do-while loop: Menu-driven program ---
    // This is a common use case for do-while, ensuring the menu is displayed at least once.
    int choice;
    do {
        std::cout << "\n--- Menu ---" << std::endl;
        std::cout << "1. Option A" << std::endl;
        std::cout << "2. Option B" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "You selected Option A." << std::endl;
                break;
            case 2:
                std::cout << "You selected Option B." << std::endl;
                break;
            case 3:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 3); // Loop continues until the user chooses to exit (choice 3).

    // --- 3. do-while loop where condition is initially false ---
    // The loop body still executes once.
    int x = 10;
    std::cout << "\nDemonstrating do-while with initially false condition:" << std::endl;
    do {
        std::cout << "This message prints once. x = " << x << std::endl;
        x++;
    } while (x < 5); // Condition is false (10 < 5 is false), but loop ran once.

    // Key points about do-while loop:
    // - Loop body executes at least once.
    // - Condition is checked at the end of each iteration.
    // - Useful for situations where you need to perform an action at least once,
    //   like getting valid input from a user or displaying a menu.

    return 0; // Indicate successful program execution.
}
