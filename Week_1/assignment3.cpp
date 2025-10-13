//Ask the user for the total purchase amount and calculate the sales task at 6%
#include <iostream>
using namespace std;
int main() {
    double purchaseAmount;
    const double salesTaxRate = 0.06; // 6% sales tax

    std::cout << "Enter the total purchase amount: $";
    std::cin >> purchaseAmount;

    double salesTax = purchaseAmount * salesTaxRate;

    std::cout << "The sales tax at 6% is: $" << salesTax << std::endl;

    return 0;
}