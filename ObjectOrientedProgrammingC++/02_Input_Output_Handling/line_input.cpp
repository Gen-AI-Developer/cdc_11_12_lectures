// 02_Input_Output_Handling/line_input.cpp
// This program demonstrates how to read an entire line of text from the console in C++.

#include <iostream> // Required for basic input/output operations.
#include <string>   // Required for std::string and std::getline.

int main() { // The main function where program execution begins.

    std::string line1; // Declare a string variable to store the first line of input.
    std::string line2; // Declare a string variable to store the second line of input.

    // --- 1. Reading a line using std::getline(std::cin, string_variable) ---
    // This function reads characters from the input stream (std::cin) until a newline character is encountered.
    // The newline character is extracted from the stream but not stored in the string.
    std::cout << "Enter your favorite quote (can contain spaces):\n";
    std::getline(std::cin, line1); // Read the entire line into line1.
    std::cout << "Your quote is: \"" << line1 << "\"" << std::endl;

    // --- 2. Reading another line after a previous std::getline ---
    // std::getline handles the newline character, so there's no need for std::cin.ignore() here
    // if the previous input was also std::getline.
    std::cout << "\nEnter your full address (press Enter when done):\n";
    std::getline(std::cin, line2); // Read another entire line into line2.
    std::cout << "Your address is: " << line2 << std::endl;

    // --- Important consideration: Mixing std::cin >> and std::getline() ---
    // If you use `std::cin >> variable;` (e.g., for an int or float) before `std::getline()`,
    // the `std::cin >>` operation leaves the newline character in the input buffer.
    // `std::getline()` will then read this leftover newline immediately and appear to read an empty line.
    // To fix this, you need to clear the input buffer before calling `std::getline()`.

    int age;
    std::string city;

    std::cout << "\nEnter your age: ";
    std::cin >> age; // Reads the integer, but leaves the newline character in the buffer.

    // To consume the leftover newline character before calling getline:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // #include <limits> is needed for std::numeric_limits

    std::cout << "Enter your city: ";
    std::getline(std::cin, city); // Now it will correctly read the city.

    std::cout << "You are " << age << " years old and live in " << city << "." << std::endl;

    return 0; // Indicate successful program execution.
}
