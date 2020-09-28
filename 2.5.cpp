#include<iostream>

using namespace std;
float transformDegree(float degree);
int main(void)
{
    cout<<"Please enter a Celsius value:";
    float degree;
    cin>>degree;
    cout<<degree<<"degrees Celsius is "<<transformDegree(degree)<<" degrees Fahrenheit.";
    return 0;
}
float transformDegree(float degree)
{
    return degree*1.8+32.0;
}
