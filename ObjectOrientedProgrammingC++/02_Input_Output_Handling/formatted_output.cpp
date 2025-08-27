// 02_Input_Output_Handling/formatted_output.cpp
// This program demonstrates various ways to format output in C++ using manipulators.

#include <iostream> // Required for basic input/output operations.
#include <iomanip>  // Required for output manipulators like std::fixed, std::setprecision, std::setw.
#include <string>   // Required for std::string.

int main() { // The main function where program execution begins.

    double value = 123.456789;
    int integerValue = 42;
    std::string text = "Hello";

    // --- 1. Setting precision for floating-point numbers ---
    std::cout << "--- Precision Examples ---" << std::endl;
    std::cout << "Default precision: " << value << std::endl; // Default output might vary.

    // std::fixed: Ensures that the floating-point number is printed in fixed-point notation (not scientific).
    // std::setprecision(n): Sets the total number of digits to be displayed (before decimal for default, after decimal for fixed).
    std::cout << std::fixed << std::setprecision(2) << "Fixed with 2 decimal places: " << value << std::endl; // Output: 123.46
    std::cout << std::fixed << std::setprecision(4) << "Fixed with 4 decimal places: " << value << std::endl; // Output: 123.4568

    // std::scientific: Displays floating-point numbers in scientific notation.
    std::cout << std::scientific << std::setprecision(3) << "Scientific with 3 decimal places: " << value << std::endl; // Output: 1.235e+02

    // Reset to default floatfield (usually std::defaultfloat, which is a mix of fixed and scientific depending on value).
    std::cout.unsetf(std::ios_base::floatfield);
    std::cout << std::setprecision(6) << "Reset to default precision: " << value << std::endl; // Output: 123.457 (might vary based on compiler/system)

    // --- 2. Setting width and fill character ---
    std::cout << "\n--- Width and Fill Examples ---" << std::endl;

    // std::setw(n): Sets the field width for the next output operation. It only applies to the *next* output.
    // std::setfill(char): Sets the character used to fill the unused width.
    std::cout << std::setw(10) << integerValue << std::endl; // Right-justified, padded with spaces. Output:         42
    std::cout << std::setfill('*') << std::setw(10) << integerValue << std::endl; // Padded with asterisks. Output: ********42
    std::cout << std::setfill(' '); // Reset fill character to space.

    // std::left: Left-justifies the output within the field width.
    std::cout << std::left << std::setw(10) << text << std::endl; // Output: Hello     
    std::cout << std::right << std::setw(10) << text << std::endl; // Reset to right-justified (default). Output:      Hello

    // --- 3. Showing positive sign and base for numbers ---
    std::cout << "\n--- Show Sign and Base Examples ---" << std::endl;

    // std::showpos: Forces a plus sign (+) to be generated for positive numbers.
    std::cout << std::showpos << 100 << std::endl; // Output: +100
    std::cout << std::noshowpos << 100 << std::endl; // Reset to no plus sign (default). Output: 100

    // std::showbase: Shows the base prefix for integral values (0 for octal, 0x for hexadecimal).
    std::cout << std::showbase << std::oct << 100 << std::endl; // Output: 0144 (octal representation of 100)
    std::cout << std::showbase << std::hex << 100 << std::endl; // Output: 0x64 (hexadecimal representation of 100)
    std::cout << std::dec << std::noshowbase << 100 << std::endl; // Reset to decimal and no base prefix.

    // --- 4. Boolean output ---
    std::cout << "\n--- Boolean Output Examples ---" << std::endl;
    bool flag = true;
    std::cout << "Boolean (default): " << flag << std::endl; // Output: 1

    // std::boolalpha: Displays boolean values as "true" or "false" instead of 1 or 0.
    std::cout << std::boolalpha << "Boolean (boolalpha): " << flag << std::endl; // Output: true
    std::cout << std::noboolalpha << "Boolean (noboolalpha): " << flag << std::endl; // Reset to 1/0. Output: 1

    return 0; // Indicate successful program execution.
}
