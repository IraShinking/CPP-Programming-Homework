#include<iostream>
#include<iomanip>
#include"Array.h"
using namespace std;


int main(void)
{
    Array<int> a(10);//存放闰年年份。
    int n;
    cout<<"Enter a value of year and we will figure out all the leap years in the 10 years near it:";
    cin>>n;
    bool leapYear=false;
    int leapYearN=0;
    for(int i=n-5;i<n+5;i++)
    {
        if(i%4==0||i%100==0)
        {
            leapYear=true;
        }
        if(leapYear)
        {
            a[leapYearN]=i;
            leapYearN+=1;
            leapYear=false;
        }

    }
    cout<<"The leap years are: ";
    for(int i=0;i<leapYearN;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
