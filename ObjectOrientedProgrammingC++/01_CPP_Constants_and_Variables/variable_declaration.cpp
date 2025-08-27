// 01_CPP_Constants_and_Variables/variable_declaration.cpp
// This program demonstrates the declaration and initialization of different types of variables in C++.

#include <iostream> // Include the iostream library for input/output operations.
#include <string>   // Include the string library for using string data type.

int main() { // The main function where program execution begins.

    // Integer variable
    int age = 30; // Declare an integer variable 'age' and initialize it with 30.
    std::cout << "Age: " << age << std::endl; // Print the value of age.

    // Floating-point variable (float)
    float temperature = 25.5f; // Declare a float variable 'temperature' and initialize it with 25.5.
                               // The 'f' suffix indicates a float literal.
    std::cout << "Temperature: " << temperature << std::endl; // Print the value of temperature.

    // Double-precision floating-point variable (double)
    double pi = 3.14159; // Declare a double variable 'pi' and initialize it with 3.14159.
    std::cout << "Pi: " << pi << std::endl; // Print the value of pi.

    // Character variable
    char grade = 'A'; // Declare a character variable 'grade' and initialize it with 'A'.
                      // Single quotes are used for character literals.
    std::cout << "Grade: " << grade << std::endl; // Print the value of grade.

    // Boolean variable
    bool isStudent = true; // Declare a boolean variable 'isStudent' and initialize it with true.
                           // Boolean values can be true or false.
    std::cout << "Is Student: " << isStudent << std::endl; // Print the value of isStudent (1 for true, 0 for false).

    // String variable
    std::string name = "Alice"; // Declare a string variable 'name' and initialize it with "Alice".
                                // Double quotes are used for string literals.
    std::cout << "Name: " << name << std::endl; // Print the value of name.

    // Re-assigning variable values
    age = 31; // Variables can be re-assigned new values.
    std::cout << "New Age: " << age << std::endl; // Print the new value of age.

    return 0; // Indicate successful program execution.
}
