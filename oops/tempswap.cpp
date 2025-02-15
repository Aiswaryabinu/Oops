#include <iostream>
using namespace std;

// Swap function with reference parameters
template <typename T>
void swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int c, d;
    cout << "Enter 2 numbers: ";
    cin >> c >> d;
    cout << "Before swapping:" << endl;
    cout << "a: " << c << "  b: " << d << endl;
    
    // Call the swap function
    std::swap (c, d);

    cout << "After swapping:" << endl;
    cout << "a: " << c << "  b: " << d << endl;

    return 0;
}
