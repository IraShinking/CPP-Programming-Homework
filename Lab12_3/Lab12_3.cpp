#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;
class Students
{
public:

    void reset(int n, string nme,char s)
    {
        number = n;
        name = nme;
        sex = s;
    }
    void show();

private:
    int number;
    string name;
    char sex;
};

void Students::show()
{
    cout << "Number: " << number << " name: " << name << " sex: " << sex << endl;
}

int main(void)
{
    Queue<Students> studentQ;
    Students std[5];
    int number;
    string name;
    char sex;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "Input the information of the student " << i + 1 << " (number,name,sex:F/M):";
        cin >> number >> name >> sex;
        std[i].reset(number, name, sex);
        studentQ.insert(std[i]);
    }cout<<endl;
    cout<<"Output the information of "<<i<<"students: "<<endl;

    int j=0;
    for(j=0;!studentQ.isEmpty();j++)
    {
        std[j]=studentQ.remove();
        std[j].show();

    }

    return 0;
}
