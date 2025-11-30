#include <iostream>
using namespace std;
int main(){
    const int size = 5;
    int arr[size] = {1,3,4,5,6};
    int sum = arr[3] + arr[4];
    cout<<sum<<endl;
    for (int i=0; i<=size-1; i++){
        sum += arr[i];
        cout << sum << endl;
    }
}    