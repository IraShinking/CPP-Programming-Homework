#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a, string b)
{
    return b>a;
}
int main()
{
    string s[10];
    s[0]="Today";
    s[1]="Is";
    s[2]="A";
    s[3]="Good";
    s[4]="Day";
    s[5]="Don't";
    s[6]="You";
    s[7]="Think";
    s[8]="So";
    s[9]="Too?";
    for(int i=0;i<10;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl<<"Now sort!"<<endl;
    sort(s,s+10,cmp);
    for(int i=0;i<10;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}