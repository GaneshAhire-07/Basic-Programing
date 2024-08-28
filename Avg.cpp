#include <iostream>
using namespace std;

int main()
{
    int numScores = 25;
    double score, sum = 0.0;

    cout << "Enter the 25 exam scores:" << endl;

    for (int i = 1; i <= numScores; i++)
    {
        cout << "Score " << i << ": ";
        cin >> score;
        sum += score;
    }

    double average = sum / numScores;
    cout << "The average score is: " << average << endl;

    return 0;
}
