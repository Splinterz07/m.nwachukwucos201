#include <iostream> 
using namespace std;
int main() {
    int day;
    cout << "Enter the day ======>" << endl;
    cin >> day;
    if(day == 1){
        cout << "weekday \n";
    }
    else if (day == 2){
        cout << "weekday \n";
    }
    else if (day == 3){
        cout << "weekday \n";
    }
    else if (day == 4){
        cout << "weekday \n";
    }
    else if (day == 5){
        cout << "weekday \n";
    }
    else if (day == 6){
        cout << "weekend \n";
    }
    else if (day == 0){
        cout << "weekend \n";
    }
    else {
        cout << "invalid day \n";
    }
    return 0;
}