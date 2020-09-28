#include<iostream>

using namespace std;

void compute(int);
int main()
{
    int number;
    cout <<"Input an decimal integer: " ;
    cin >> number;
    cout << endl;
    cout << "The binary form is: ";
    compute(number);


    return 0;
}

void compute(int number)
{
    if (number==0)
    return;

    compute(number/2);
    cout << number%2;
}
