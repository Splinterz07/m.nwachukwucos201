#include <iostream>
using namespace std;
//Arrays are baically efficient ways to store multiple values of same data type
int main(){
    float scores[10]; //declaration of an array of floats with size 100
    scores[3] = 40.0; //assigning value to 4th element of array
    //int size = 4;
    //double myList[size]; //variable size arrays are not allowed in C++14
    const int size = 4;
    double myList[size]; //correct way using constant size
    scores[9] = scores[8] + scores[3]; //adding two elements of array and storing in another element (uses 0-based indexing to access elements)
    cout << "Max of first and second score is: " << max(scores[0],scores[1]) << endl; //using max function to get maximum of two elements of array (might need #include<algorithm> for max function)
    double myList[] = (1.9, 2.9, 3.4, 3.5); //array initialization without specifying size
    double myList[4] = {1.9, 2.9, 3.4, 3.5}; //array initialization with specifying size 
    //both of them work, cause the compiler automatically determines the size based on number of elements provided




}    
