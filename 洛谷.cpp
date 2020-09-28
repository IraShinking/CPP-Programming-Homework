#include <iostream>
#include <cstdlib> 
using namespace std;

int main(void)
{
    int apple, perTime, total;
    int num;
    cin >> apple >> perTime >> total;
    if (perTime == 0)
    {
       cout<<0;
    }
    else
    {
        num = total / perTime;
        if (total % perTime != 0)
        {
            num += 1;
        }
        apple -= num;
        if(apple<0)
        {
            apple=0;
        }
        cout << apple;
    }
    return 0;
}