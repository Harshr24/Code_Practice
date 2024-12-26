#include <iostream>

class MyClass {
public:
   void printMessage() {
       std::cout << "Hello, this is a message from MyClass object!" << std::endl;
   }
};

int main() {

   MyClass* obj = new MyClass;
   obj->printMessage();
   delete obj;

   return 0;
}

/*  with pointer : 


    #include <iostream>
    int main() {
    
    int* ptr; // Declare a pointer
    ptr = new int; // Allocate memory for an integer

    if (ptr == nullptr) {
        std::cout << "Memory allocation failed!" << std::endl;
    } else {
        std::cout << "Memory allocated successfully. Memory address of the allocated memory: " << ptr << std::endl;

        delete ptr;
        std::cout << "Allocated memory freed successfully!" << std::endl;
    }
    return 0;
}


*/