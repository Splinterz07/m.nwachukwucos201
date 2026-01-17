#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 31 ,43, 67, 85, 42, 34, 57};
    int max = arr[0];
        for (int i = 1; i < 8; i++){
            if (arr[i] > max){
                max = arr[i];
            };
        };
    cout << "The max number in the array is " << max << endl;

    int arr2[] = {3, 5, 7, 8, 4, 6};
    int min = arr2[5];
    int minIndex = 5;
        for (int i = 4; i >= 0; i--){
            if(arr2[i] < min){
                min = arr2[i];
                minIndex = i;
            }
        }
    cout << "The minimum number in the array is " << min << endl;
    cout << "The index of the minimmum number is " << minIndex << endl;




    return 0;
}