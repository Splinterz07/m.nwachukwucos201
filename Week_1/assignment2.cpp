//Write a code that swaps the value of 2 integers using a temporary variable
#include <iostream>
using namespace std;
int main() {
    int a, b, temp;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << endl;
    cout << "First integer: " << a << endl;
    cout << "Second integer: " << b << endl;

    return 0;
}