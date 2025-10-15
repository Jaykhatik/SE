/*
Parameterized Constructor

->A constructor that takes arguments is called a parameterized constructor.
->It allows you to initialize objects with specific values at creation time.
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
        cout << "Parameterized Constructor called" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(1, "Jay");  // Constructor with arguments
    s1.display();

    Student s2(2, "Kalu Kamat");
    s2.display();

    return 0;
}
