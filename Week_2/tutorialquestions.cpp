#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string name, courseName, locationName;
    bool isPau;
    int courseChoice, locationChoice;
    int days = 0;
    double regFee = 0, lodgingPerDay = 0;
    double lodgingCost, total, promo = 0;
    int r;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Are you a PAU student? (1 for Yes, 0 for No): ";
    cin >> isPau;

    cout << "Enter course choice (1–5): ";
    cin >> courseChoice;

    cout << "Enter location choice (1–5): ";
    cin >> locationChoice;

    if (courseChoice == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } else if (courseChoice == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } else if (courseChoice == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } else if (courseChoice == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } else if (courseChoice == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    } else {
        cout << "Invalid course choice.\n";
        return 0;
    }

    if (locationChoice == 1) {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    } else if (locationChoice == 2) {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    } else if (locationChoice == 3) {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    } else if (locationChoice == 4) {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    } else if (locationChoice == 5) {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    } else {
        cout << "Invalid location choice.\n";
        return 0;
    }

    lodgingCost = lodgingPerDay * days;
    total = regFee + lodgingCost;

    if (isPau && (locationChoice == 1 || locationChoice == 2)) {
        lodgingCost -= lodgingCost * 0.05;
    }

    if ((days > 5) || (regFee > 12000)) {
        regFee -= regFee * 0.03;
    }

    total = regFee + lodgingCost;

    srand(time(0));
    r = rand() % 100 + 1;
    if (r == 7 || r == 77) {
        promo = 500;
        total -= promo;
    }

    cout << "\n===== REGISTRATION SUMMARY =====\n";
    cout << "Name: " << name << "   (PAU student: " << (isPau ? "Yes" : "No") << ")\n";
    cout << "Course: " << courseName << "   Days: " << days << "\n";
    cout << "Registration: ₦" << regFee << " (after any discount)\n";
    cout << "Lodging: ₦" << lodgingPerDay << " x " << days 
         << " = ₦" << lodgingCost << " (after any discount)\n";
    cout << "Location: " << locationName << "\n";
    cout << "Random draw: " << r << "   Promo applied: ₦" << promo << "\n";
    cout << "TOTAL: ₦" << total << "\n";
    cout << "================================\n";

    return 0;
}