/* Name: Chukwubuikem Miracle Nwachukwu
   Matric number: 24120111059
   Class: Computer Science Year 2 Stream 1
   Project: PAU Application Processor Portal
   Course: COS 201
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    string fullname;
    int jambscore, age, hostelchoice;
    double waecavg;
    bool firstchoice, disciprecord;

    cout << "Please enter your full name: ";
    getline(cin, fullname);
    cout << "Hello, "<< fullname <<". Welcome to the PAU application processor portal" << endl;
    
    do{
        cout << "Enter JAMB score: ";
        cin >> jambscore;
        if (jambscore > 400 || jambscore < 0)
        {
            cout << "Invalid JAMB score. Please try again" << endl;
        }
    } while (jambscore > 400 || jambscore < 0);

    do
    {
        cout << "Enter your WAEC average: ";
        cin >> waecavg;

        if (waecavg > 100 || waecavg < 0)
        {

            cout << "Invalid score. Please try again" << endl;
        }
    } while (waecavg > 100 || waecavg < 0);

    cout << "Please enter your age in years: ";
    cin >> age;

    cout << "Is Pau your first choice? (Input 1 for Yes and 0 for No) ";
    cin >> firstchoice;

    cout << "Do you have any disciplinary records? (Input 1 for Yes and 0 for No) ";
    cin >> disciprecord;

    cout << "What is your hostel of choice?" << endl;
    cout << "S/N | Hostel       | Price (NGN)" << endl;
    cout << "1   | Main Hostel  | 180,000" << endl;
    cout << "2   | Annex Hostel | 120,000" << endl;
    cout << "3   | Day Student  | 0.00" << endl;

    cout << "Which hostel would you prefer (1-3)? ";
    cin >> hostelchoice;

    string hostelname;
    int hostelfee;

    switch (hostelchoice)
    {
        case 1:
            hostelname = "Main hostel";
            hostelfee = 180000;        
            break;

        case 2:
            hostelname = "Annex hostel";
            hostelfee = 120000;   
            break;

        case 3:
            hostelname = "Day student";
            hostelfee = 0;   
            break;

        default:
            cout << "Invalid hostel choice. Please try again.";
            return 0;
        }

    const int Basetuition = 1500000;
    string admissionstatus;

    if (disciprecord || age < 15) {
         admissionstatus = "Rejected";
    }
    else if (((jambscore >= 220 && waecavg >= 60) && firstchoice) || (jambscore >= 200 && waecavg >= 70))
    {
       admissionstatus = "Admitted";
    }
    else {
        admissionstatus = "Pending";
    }

    int scholarshippercent = 0;

    if (jambscore >= 320)
    {
        scholarshippercent = 30;
    }

    else if (jambscore >= 280)
    {
        scholarshippercent = 20;
    }

    else if (jambscore >= 240)
    {
        scholarshippercent = 10;
    }

    if (waecavg >= 80 && firstchoice)
    {
        scholarshippercent += 5;
    }

    if (admissionstatus == "Pending" && disciprecord)
    {
        hostelname = "On Hold";
        hostelfee = 0;
    }
    else if (admissionstatus == "Rejected")
    {
        hostelname = "Not applicable";
        hostelfee = 0;
        scholarshippercent = 0;
    }

    int tuitionafterscholarship = 0;
    int totalpayable = 0;
    int grant = 0;
    int r = 0;

    if (admissionstatus=="Admitted"){
    srand(time(0));

    r = rand()% 100 +1;

    bool isPrime = r==2 || r==3 || r==5 || r==7 || r==11 || r==13 ||r==17 || r==19 
               ||r==23|| r==29 ||r==31||r==37|| r==41||r==43||r==47||r==53||r==59
               ||r==61||r==67||r==71||r==73|| r==79||r==83||r==89||r==97;

    if(isPrime && r <=97 && admissionstatus=="Admitted" ){
    grant=50000; }

    tuitionafterscholarship = Basetuition - (scholarshippercent*Basetuition/100);
   totalpayable = tuitionafterscholarship + hostelfee - grant; 
    }
    if (totalpayable <0){
    totalpayable=0; }

cout<<"Name: "<<fullname<<endl;
cout<<"Admission status: "<<admissionstatus<<endl;
cout<<"Scholarship: "<<scholarshippercent<<"%"<<" | Tuition after scholarship: NGN "<<tuitionafterscholarship<<endl;

cout<<"Hostel: "<<hostelname<<" | Hostel Fees: NGN "<<hostelfee<<endl;
cout<<"Random draw: "<<r<<" | Merit grant: NGN "<<grant<<endl;

cout<<"TOTAL PAYABLE: NGN "<<totalpayable<<endl;






}