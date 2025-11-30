//Print no. 1 - 100 using while loop, for loop and do-while loop
#include <iostream>
using namespace std;
int main() {
    // Using while loop
    cout << "Using while loop:" << endl;
    int i = 1;
    while (i <= 100) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Using for loop
    cout << "Using for loop:" << endl;
    for (int j = 1; j <= 100; j++) {
        cout << j << " ";
    }
    cout << endl;

    // Using do-while loop
    cout << "Using do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 100);
    cout << endl;

    return 0;
}