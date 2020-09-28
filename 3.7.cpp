#include<iostream>

using namespace std;
const double KMtoMile=0.6214;
const double GtL=3.875;

int main(void)
{
    double km;
    double mile;
    double gallons;
    double liters;
    char drop;

    cout<<"Enter the gasoline you used in driving and the distance: (fuel/distance);";
    cin>>liters;
    cin>>drop;
    cin>>km;
    mile=km*KMtoMile;
    gallons=liters/GtL;
    km=km/100;
    cout<<"The gasoline you used is:"<<liters/km<<"/100 km."<<endl
    << "It equals to :"<<mile/gallons<<"mpg.";
    return 0;



}
