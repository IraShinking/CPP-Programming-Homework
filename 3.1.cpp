#include<iostream>

using namespace std;
const int Feet=12;

int main(void)
{
    cout<<"Enter your height in inches:";
    int heightInches;
    cin>>heightInches;
    int heightFeet;
    heightFeet=heightInches/Feet;
    int heightRest;
    heightRest=heightInches%Feet;
    cout<<"Your height is :"<< heightFeet <<"feet and "<<heightRest<<" inches";
    return 0;
}
