// 6 Write a C++ program to display Names, Roll No., and grade of 3 students who have appeared in the examination. 
// Declare the class of name, roll no., and grade. Create an array of class objects. 
// Read and display the contents of the array.
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int rollNo;
    char grade;
    
    // Member function to input student details
    void inputStudent() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll No.: ";
        cin >> rollNo;
        cout << "Enter Grade: ";
        cin >> grade;
    }
    
    // Member function to display student details
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student students[3]; // Create an array of 3 Student objects

    // Input student details
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        students[i].inputStudent();
    }

    // Display student details
    cout << "Student Details:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].displayStudent();
        cout << endl;
    }

    return 0;
}