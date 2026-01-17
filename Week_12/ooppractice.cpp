#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
    

    void whatcaristhis(){
    cout << "This is the exquisite " << brand << " " << model << endl;
    cout << "It was manufactured in the year " << year << " and is widely considered one of the greatest cars of all time (by me anyway)." << endl;
    cout << "In my opinion, the " << brand << " " << model << "is a true epitome of engineering excellence." << endl;
    cout << "The " << brand << " " << model << " is my favourite car as it is a perfect blend of luxury and performance." << endl;
    }
};


int main(){
    Car mycar;
    mycar.brand = "Bugatti";
    mycar.model = "Chiron";
    mycar.year = 2020;
    mycar.whatcaristhis();





    return 0;
}