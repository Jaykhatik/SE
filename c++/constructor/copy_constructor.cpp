/*
Copy Constructor

->A copy constructor is used to create a new object as a copy of an existing object.

syntax:
ClassName(const ClassName &old_obj)

*/

#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Copy constructor
    Student(const Student &obj) {
        roll = obj.roll;
        name = obj.name;
        cout << "Copy Constructor called" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Jay");
    Student s2 = s1;  // Copy constructor is called here

    s2.display();
    return 0;
}
