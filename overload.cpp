#include <iostream>
using namespace std;

class distance {
    int meter;

public:
    // Constructor with default value
    distance(int m = 0) : meter(m) {}

    // Friend functions for operator overloading
    friend bool operator>(const distance& d1, const distance& d2);
    friend bool operator==(const distance& d1, const distance& d2);

    // Display function to show the value of meter
    void display() const {
        cout << "Distance: " << meter << " meters" << endl;
    }
};

// Non-member function to overload '>'
bool operator>(const distance& d1, const distance& d2) {
    return d1.meter > d2.meter;
}

// Non-member function to overload '=='
bool operator==(const distance& d1, const distance& d2) {
    return d1.meter == d2.meter;
}

int main() {
    distance d1(10);
    distance d2(20);

    // Check if d1 is greater than d2
    if (d1 > d2) {
        cout << "d1 is greater than d2" << endl;
    } else {
        cout << "d1 is not greater than d2" << endl;
    }

    // Check if d1 is equal to d2
    if (d1 == d2) {
        cout << "d1 is equal to d2" << endl;
    } else {
        cout << "d1 is not equal to d2" << endl;
    }

    return 0;
}
