#include <iostream> 
using namespace std;
int main() {
    int day;
    cout << "Enter the day ======>" << endl;
    cin >> day;
    if (day == 1 || day == 2 || day == 3 || day == 4||day == 5){
        cout << "weekday \n";
    }
    else if (day == 0 || day == 6){
        cout << "weekend \n";
    }
    else {
        cout << "invalid day \n";
    }
    return 0;
}