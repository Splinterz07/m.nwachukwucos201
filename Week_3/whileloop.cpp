#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        cout<< "When i = "<< i; 
        cout << ", the sum is: " << sum << endl;
        i++;
    }
    while (i<10);
     
}