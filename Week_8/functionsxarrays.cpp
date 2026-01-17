#include <iostream>
using namespace std;
void printArray(int theArray[], int size){
    for(int i = 0; i < size; i++){
        cout << theArray[i] << "\t";    
    }
    cout << endl;
}
void printArray( float theArray[], int size){
    for ( int i = 0; i < size; i++){
        cout << theArray[i] << "\t";
    }
    cout << endl;
}


int main(){
    int bucky[3] = {20, 54, 675};
    int jessica[] = {54, 24, 7, 8, 9, 99};
    float scores[10] = {35.0, 88.5, 76.0, 77.0, 80.0, 92.0, 58.0, 45.5, 67.5, 84.0};
    scores[0]++;

    cout << "Bucky's Array: ";
    printArray(bucky, 3);
    cout << "Jessica's Array: ";
    printArray(jessica, 6);
    cout << "Scores:";
    printArray(scores, 10);

    return 0;
}