#include<iostream>
using namespace std;

const int N = 200;
const int M = 20;
int main(void)
{
    
    cout << "Enter the student's number:";
    int studentN;
    cin >> studentN;
    cout << "Enter the subjest's amount:";
    int subjectN;
    cin >> subjectN;
    double score[N][M] = {0.0};
    int i = 0;
    int j = 0;
    for (i = 0; i < studentN;i++)
    {
        cout << "Enter the score of student " << i+1 << endl;
        for (j = 0; j < subjectN;j++)
        {
            cout << "Enter the score of subject " << j + 1 << ": ";
            cin >> score[i][j];
        }
    }
    cout << "Input finished."
         << "The score stored are:" << endl;
   

    double highestScore[M]={0.0};
    double averageScore[M]={0.0};
    double sum = 0.0;
    for (j = 0; j < subjectN;j++)
    {
        for (i = 0; i < studentN;i++)
            {
                if(score[i][j]>highestScore[j])
                    highestScore[j] = score[i][j];
                sum += score[i][j];
            }
            averageScore[j] = sum / studentN;
            sum = 0.0;
    }

    for (j = 0; j < subjectN;j++)
    {
        cout << "The average score of subject " << j + 1 << " is " << averageScore[j] << endl;

        cout << "The highest score of subject " << j + 1 << " is " << highestScore[j] << endl;
        cout << "\n";
    }

        return 0;
}