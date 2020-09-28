#include<iostream>

using namespace std;

void print(int a);

int main(void)
{
    int i;
    for(i=0;i<4;i++)
    {
        print(i);
    }
    return 0;
}

void print(int i)
{
    switch (i)
    {
    case 0:
    case 1:cout<<"Three blind mice"<<endl;break;
    case 2:
    case 3:cout<<"See how they run"<<endl;break;
    default:break;

    }

}
