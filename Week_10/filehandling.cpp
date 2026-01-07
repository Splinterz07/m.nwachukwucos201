//File Handling in C++
#include <iostream>
#include <fstream>
using namespace std;

int main(){
//    ofstream ==> write to a file (output)
//   ifstream ==> Read to a file (input)
//    fstream ==> Read and Write to a file (input and output)
    ifstream outfile("data.txt");

    if(!outfile){
        cout<<"Error opening file.";
        return 0;
    }
    
    outfile << "Welcome to C++\n";
    outfile << "This is file handling class\n";

    outfile.close();
    cout << "Data written to file\n";
}