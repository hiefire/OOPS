#include <iostream>
using namespace std;

class Number {
    int value;
public:
    // Constructor
    Number(int v = 0) : value(v) {
        cout << "Constructor called with value " << value << endl;
    }

    // Copy constructor
    Number(const Number &n) {
        value = n.value;
        cout << "Copy constructor called with value " << value << endl;
    }

    int getValue() { return value; }
};

// Function returning a Number object
Number createNumber() {
    Number n(10);
    return n;  // may invoke copy or move constructor depending on optimization
}

int main() {
    Number n = createNumber();
    cout << "Value in n: " << n.getValue() << endl;
    return 0;
}