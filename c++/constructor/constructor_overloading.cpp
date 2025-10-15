/*
Constructor Overloading

In C++, constructors can be overloaded — meaning you can have multiple constructors with different parameter lists.
*/

#include <iostream>
using namespace std;

class Box {
    int length, width, height;

public:
    Box() {  // Default constructor
        length = width = height = 0;
    }

    Box(int l, int w, int h) {  // Parameterized constructor
        length = l;
        width = w;
        height = h;
    }

    void display() {
        cout << "L=" << length << ", W=" << width << ", H=" << height << endl;
    }
};

int main() {
    Box b1;            // Calls default constructor
    Box b2(5, 10, 15); // Calls parameterized constructor

    b1.display();
    b2.display();
}
