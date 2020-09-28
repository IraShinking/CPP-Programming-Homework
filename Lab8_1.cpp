#include<iostream>
#include<string>
using namespace std;

class Person
{public:
    Person() { cout << "Constructor of Person is called." << endl; }
    ~Person() { cout << "Deconstructor of Person is called." << endl; }
    string GetName()
    {
        return name;
    }
    void SetName(char *nameIn)
    {
        int i;
        for (i = 0; i < 9;i++)
        {
            name[i] = nameIn[i];
        }
    }
    void Printinfo()
    {
        cout << "The name is: " << GetName() << endl;
    }
    protected:
        char name[10];
};

class Student:public Person
{
    public:
    Student() { cout << "Constructor of Student is called." << endl; }
    ~Student() { cout << "Deconstructor of Student is called." << endl; }
    void SetNum(int numberx)
    {
        number = numberx;
    } 
    int GetNum()
    {
        return number;
    }
    void Printinfo()
    {
        cout << "The name is: " << GetName() << ". The number is: " << GetNum() << endl;
    }
    protected:
        int number;
};

int main()
{
    Student sd1;
    Person ps1;
    char name1[10] = "Hjulian";
    char name2[10] = "Julya";

    sd1.SetName(name1);
    sd1.SetNum(1011);
    sd1.Printinfo();
    ps1.SetName(name2);
    ps1.Printinfo();
    return 0;
}