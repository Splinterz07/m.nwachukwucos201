#include <iostream>
using namespace std;

int main() {
    constexpr double PI = 3.14159;        // constant
    double radius = 0.0;
    cout << "Enter radius: ";
    cin >> radius;                    // read input
    if (radius < 0) {
        cout << "Radius cannot be negative\n";
        return 1;
    }
    double area = radius * radius * PI; // compute
    cout << "Area is " << area << '\n';
    return 0;
}