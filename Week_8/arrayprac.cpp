#include <iostream>
#include <string>
using namespace std;
int main() {
    int x = 5;
    int arr[5] = {1, 2 ,3 ,4, 5};
    cout << arr[0] << endl;
    sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;



    return 0;
}
 