/*
Default Constructor
A constructor with no parameters is called a default constructor.
It initializes objects with default values.
*/
#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default constructor
    Student() {
        roll = 101;
        name = "jay";
        cout << "Default Constructor called" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;  // Default constructor is automatically called
    s1.display();
    return 0;
}
