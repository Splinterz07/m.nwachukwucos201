using namespace std;
#include <iostream>;
#include <algorithm>;
int main(){
    float scores[10] = {35.0 + 88.5 + 76.0 + 77.0 + 80.0 + 92.0 + 58.0 + 45.5 + 67.5 + 84.0};
    float sum = 0.0, average = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += scores[i];
    }
    average = sum / 10;
    cout << "Sum of scores: " << sum << endl;
    cout << "Average score: " << average << endl;
    return 0;
}
