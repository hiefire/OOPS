#include <iostream>
using namespace std;

class Box {
    int length;
public:
    // Constructor
    Box(int l = 1) : length(l) {}

    void setLength(int l) { length = l; }
    int getLength() const { return length; }
};

// Pass by value
void passByValue(Box b) {
    b.setLength(50);
    cout << "Inside passByValue: " << b.getLength() << endl;
}

// Pass by pointer
void passByPointer(Box* b) {
    b->setLength(150);
    cout << "Inside passByPointer: " << b->getLength() << endl;
}

// Pass by reference
void passByReference(Box& b) {
    b.setLength(200);
    cout << "Inside passByReference: " << b.getLength() << endl;
}

int main() {
    Box b(10);

    cout << "Original: " << b.getLength() << endl;

    passByValue(b);
    cout << "After passByValue: " << b.getLength() << endl;

    passByPointer(&b);
    cout << "After passByPointer: " << b.getLength() << endl;

    passByReference(b);
    cout << "After passByReference: " << b.getLength() << endl;

    return 0;
}
