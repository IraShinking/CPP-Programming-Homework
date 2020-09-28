#include<iostream>

using namespace std;
int main()
{
    int intOne;
    int &rSomeRef=intOne;
    intOne=5;
    cout<<"intOne: "<<intOne<<endl;
    cout<<"rSomeRef: "<<rSomeRef<<endl;
    int intTwo=8;
    rSomeRef=intTwo;
    cout<<"intOne: "<<intOne<<endl;
    cout<<"rSomeRef: "<<rSomeRef<<endl;
    return 0;
}