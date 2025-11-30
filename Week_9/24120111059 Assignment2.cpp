/* Name: Chukwubuikem Miracle Nwachukwu
   Matric number: 24120111059
   Class: Computer Science Year 2 Stream 1
   Project: ATM Simulator
   Course: COS 201
*/

#include <iostream>
using namespace std;
bool verifyPin(int correctPin){
int attempt = 1;
while(attempt<=3){
    cout<<"Enter your pin: "<<endl;
    int input;
    cin>>input;
    if(input == correctPin){
            return true;    
        }  
        else {
            int attemptsLeft = 3 - attempt;
            if(attemptsLeft > 0){
                cout << "Wrong PIN. You have " << attemptsLeft 
                     << " attempt(s) left." << endl;
            }
        }

        attempt++;
    }
    cout << "Too many failed attempts." << endl;
return false;
}


void displayMenu(){
cout<<"=======ATM MENU======"<<endl;
    cout<<"1.View Balance"<<endl;
    cout<<"2.Deposit Cash"<<endl;
    cout<<"3.Withdraw Cash"<<endl;
    cout<<"4.Reset PIN"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter choice (1-5): "<<endl;
}

double viewbalance(double balance){
   cout<<"Your account balance is: "<<balance<<endl;

return balance;

}

double depositMoney(double balance){
   cout<<"Enter your deposit amount: NGN ";
    int depositamount;
   cin>>depositamount;
   return depositamount+=balance;
}

double withdrawMoney(double balance,double dailyLimit){
   cout<<"How much do you want to withdraw? NGN ";
    int withdrawal;
   cin>>withdrawal;



     if(withdrawal>balance || withdrawal>dailyLimit){
        cout<<"Sorry, you are unable to withdraw at the moment."<<endl;
        return balance;
     } 

     return balance-=withdrawal;

}
int resetPin(int currentPin){
    cout<<"Please enter your former pin: "<<endl;
    int oldpin;
    cin>>oldpin;

    if(oldpin==currentPin){

    cout<<"Please enter your new pin: "<<endl;
    int newpin;
    cin >> newpin;
    cout << "Pin successfully changed." << endl;
    
    return newpin;
    }
    else{
        cout<< "Incorrect pin." << endl;
        return currentPin;
    }

    }
    int main(){
    int AccountBalance=50000;
    int Daily_withdrawal_limit=20000;
    int User_Pin=4321;

    bool isverified=verifyPin(User_Pin);
    if(!isverified){
        cout<<"Account Locked. Please contact your bank."<<endl;
        return 0;
    }

    bool hasexited=false;
    do{

        displayMenu();
        
        int menuoption;
    cin>>menuoption;


    switch(menuoption){
    case 1:
    viewbalance(AccountBalance);
    break;

    case 2:

    AccountBalance = depositMoney(AccountBalance);
        
    break;

    case 3:

    AccountBalance = withdrawMoney(AccountBalance,Daily_withdrawal_limit);
    

    break;

    case 4:

    User_Pin = resetPin(User_Pin);
    break;

    case 5:
    cout<<"Thank you for using our ATM."<<endl;;

    return 0;

    default:
    cout<<"Invalid Option. Please try again."<<endl;

    }


    }while(!hasexited);
}
