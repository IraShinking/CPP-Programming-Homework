#include <iostream>
#include <string>
using namespace std;

template <typename type1, typename type2>
type1 bigger(type1 x, type2 y)
{
    //cout<<typeid(type).name()<<endl;
    return y > x ? y : x;
}

int main(void)
{
    cout << "Press 0 to compare two int" << endl
         << "Press 1 to compare two double" << endl
         << "Press 2 to compare two string" << endl;
    int check = 0;
    cin >> check;
    cin.get();
    switch (check)
    {
    case 0:
    {
        cout << "Input two int:";
        int i = 0, j = 0;
        cin >> i;
        cin >> j;
        cin.get();
        cout << "The bigger int is:" << bigger<int>(i, j) << endl;
    }
    break;

    case 1:
    {
        cout << "Input two double:";
        double d1 = 0.0, d2 = 0.0;
        cin >> d1;
        cin >> d2;
        cin.get();
        cout << "The bigger double is:" << bigger<double>(d1, d2) << endl;
    }
    break;
    case 2:
    {
        cout << "Input the first string:";
        string str1, str2;
        getline(cin, str1, '\n');
        cin.get();
        cout << "Input the second string:";
        getline(cin, str2);

        cout << "The bigger string is: " << bigger<string>(str1, str2) << endl;
    }
    }

    return 0;
}