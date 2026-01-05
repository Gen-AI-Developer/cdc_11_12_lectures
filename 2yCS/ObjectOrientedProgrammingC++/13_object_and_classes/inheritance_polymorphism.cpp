// 13_object_and_classes/inheritance_polymorphism.cpp
// This program demonstrates inheritance and polymorphism in C++.

#include <iostream>
#include <string>

// Base class
class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Dog barks." << std::endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Cat meows." << std::endl;
    }
};

int main() {
    // Polymorphism example
    Animal* animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->speak(); // Output: Dog barks.

    animal = &cat;
    animal->speak(); // Output: Cat meows.

    return 0;
}
