// 13_object_and_classes/data_handling_classes.cpp
// This program demonstrates encapsulation and data handling using classes.

#include <iostream>
#include <string>

// Define a class named 'BankAccount'
class BankAccount {
private:
    // Private data members
    std::string accountHolder;
    double balance;

public:
    // Constructor to initialize data members
    BankAccount(const std::string& name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    // Member function to display account details
    void displayDetails() {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create an object of the class 'BankAccount'
    BankAccount account("Alice", 1000.0);

    // Perform operations
    account.displayDetails();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayDetails();

    return 0;
}
