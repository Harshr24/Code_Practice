//13 Write a C++ program to allocate memory using new operator.
#include <iostream>
#include <string>

int main() {
    // Allocate memory for an integer
    int* intPtr = new int;
    *intPtr = 42;

    // Allocate memory for a string
    std::string* strPtr = new std::string("Hello, World!");

    // Display the allocated values
    std::cout << "Allocated integer: " << *intPtr << std::endl;
    std::cout << "Allocated string: " << *strPtr << std::endl;

    // Deallocate memory to avoid memory leaks
    delete intPtr;
    delete strPtr;

    return 0;
}