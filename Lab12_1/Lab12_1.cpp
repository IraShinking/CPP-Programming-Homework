#include<iostream>
#include<iomanip>
#include "Array.h"
using namespace std;

int main(void)
{
    int n=0;
    cout<<"Enter the number of students:";
    cin>>n;
    Array<double> score(n);
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the score of student "<<i+1<<" in the lesson A :";
        cin>>score[i];
        cout<<endl;
    }
    double avgScore=0.0;
    for(i=0;i<n;i++)
    {
        avgScore+=score[i];
    }
    avgScore/=n;
    cout<<"The average score of the "<<n<<" students is: "<<avgScore<<endl;
    return 0;
}
