//File Handling in C++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
//    ofstream ==> write to a file (output)
//   ifstream ==> Read to a file (input)
//    fstream ==> Read and Write to a file (input and output)
    ifstream infile("data.txt");
     if(!infile){
        cout<<"Cannot open file.";
        return 0;
     } 
    
     while(getline(infile, line)){
        cout << line << "\n";
     }

    infile.close();
    cout << "Data written to file\n";
}