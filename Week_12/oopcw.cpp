#include <iostream>
using namespace std;

class Car{
    public:
    string Brand;
    string Model;
    int Year;

    void whatcaristhis(){
    cout << "This is the most prestigious " << Brand << " " << Model << endl;
    cout << "It is " << Brand << "'s most expensive invention yet" << endl;
    cout << "It was released in " << Year << endl;
    }
   
};
int main(){
    Car mycar;
    mycar.Brand = "Bugatti";
    mycar.Model = "Chiron";
    mycar.Year = 2020;
    mycar.whatcaristhis();

    return 0;
}