#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Part A
int loaddata(const char filename[], int ids[], int scores[], int maxsize) {
    ifstream file(filename);
    if(!file){
        cout<<"Error opening "<<filename<<endl;
        return 0;
    }

    string header;
    getline(file, header);

    int count = 0;
    while(count < maxsize && file >> ids[count]){
        char comma;
        file >> comma >> scores[count];
        count++;
    }
    file.close();
    return count;
}

// Part B
void printall(int ids[], int scores[], int size){
    for(int i=0;i<size;i++){
        cout<<"StudentID: "<<ids[i]<<"   Score: "<<scores[i]<<endl;
    }
}

// Part C
void computestats(int scores[], int size, double &avg, int &minscore, int &maxscore){
    int sum = 0;
    minscore = scores[0];
    maxscore = scores[0];

    for(int i=0;i<size;i++){
        sum += scores[i];
        if(scores[i] < minscore) minscore = scores[i];
        if(scores[i] > maxscore) maxscore = scores[i];
    }

    avg = (double)sum / size;
}

// Part D
void computegradedistribution(int scores[], int size,
                              int &counta, int &countb, int &countc,
                              int &countd, int &countf) {

    counta = countb = countc = countd = countf = 0;

    for(int i=0; i<size; i++){
        int s = scores[i];
        if(s >= 70) counta++;
        else if(s >= 60) countb++;
        else if(s >= 50) countc++;
        else if(s >= 45) countd++;
        else countf++;
    }
}

// Part E
int pickrandompassingstudent(int ids[], int scores[], int size){
    int passindex[100];
    int c = 0;

    for(int i=0;i<size;i++){
        if(scores[i] >= 50){
            passindex[c] = i;
            c++;
        }
    }

    if(c == 0) return -1;

    int r = rand() % c;
    return passindex[r];
}

// Part F
void savesummary(const char filename[],
                 double avg, int minscore, int maxscore,
                 int counta, int countb, int countc,
                 int countd, int countf, int numstudents){

    ofstream file(filename);

    file<<"Metric,Value\n";
    file<<"Number of Students,"<<numstudents<<"\n";
    file<<"Average Score,"<<avg<<"\n";
    file<<"Minimum Score,"<<minscore<<"\n";
    file<<"Maximum Score,"<<maxscore<<"\n";
    file<<"A Count,"<<counta<<"\n";
    file<<"B Count,"<<countb<<"\n";
    file<<"C Count,"<<countc<<"\n";
    file<<"D Count,"<<countd<<"\n";
    file<<"F Count,"<<countf<<"\n";

    file.close();
}

// Part G
int main(){
    srand(time(0));

    int ids[100];
    int scores[100];

    int size = loaddata("scores.csv", ids, scores, 100);
    cout<<"Total number of students: "<<size<<"\n\n";

    printall(ids, scores, size);
    cout<<"\n";

    double avg;
    int minscore, maxscore;
    computestats(scores, size, avg, minscore, maxscore);

    cout<<"Average Score: "<<avg<<endl;
    cout<<"Minimum Score: "<<minscore<<endl;
    cout<<"Maximum Score: "<<maxscore<<endl<<endl;

    int counta, countb, countc, countd, countf;
    computegradedistribution(scores, size, counta, countb, countc, countd, countf);

    cout<<"A Count: "<<counta<<endl;
    cout<<"B Count: "<<countb<<endl;
    cout<<"C Count: "<<countc<<endl;
    cout<<"D Count: "<<countd<<endl;
    cout<<"F Count: "<<countf<<endl<<endl;

    int lucky = pickrandompassingstudent(ids, scores, size);

    if(lucky == -1){
        cout<<"No passing students.\n";
    } else {
        cout<<"Lucky Passing Student: ID "<<ids[lucky]
            <<" with score "<<scores[lucky]<<endl;
    }

    savesummary("summary.csv", avg, minscore, maxscore,
                counta, countb, countc, countd, countf, size);

    cout<<"\nsummary.csv has been created.\n";

    return 0;
}