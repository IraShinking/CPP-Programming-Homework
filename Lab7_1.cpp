#include<iostream>
#include<string>
using namespace std;

inline void test(const char* title, bool value)
{
    cout << title << " returns " << (value ? "true" : "false") << endl;
}

void show (string s1,string s2)
{
    cout << "\nNow s1: \"" << s1 << "\"" << endl
         << "Now s2: \"" << s2 << "\"";
}

int main()
{
    string s1;
    cout << "Please enter s1: ";
    cin >> s1;
    cout << "length of s1: " << s1.length() << endl;

    string s2;
    cout << "Please enter s2: ";
    cin >> s2;
    cout << "length of s2: " << s2.length() << endl;
    show(s1, s2);
    cout << "\nNow change s1 & s2"<<endl;
    swap(s1, s2);
    show(s1, s2);
    cout << "\nNow compaer s1&s2" << endl;
    if(s2<=s1)
    {
        s2 += s1;
    }
    else
         s1=s2;
    show(s1, s2);
    cout << "\nNow test whether s1 is empty" << endl;
    if(empty(s1))
    {
        cout << "S1 is empty." << endl;
    }
    else
        cout << "S1 is not empty" << endl;

    cout << "Now replace s2 with s1" << endl;
    s2.assign(s1, 0, 4);
    show(s1, s2);
    cout << "Now clear s2" << endl;
    s2.clear();
    show(s1, s2);

    return 0;
}