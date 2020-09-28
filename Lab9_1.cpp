#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    public:
        int numberl;
        int age;
        char name[10];
        Person(){cout<<"Constructor of Person is called."<<endl;}
        Person(int i,int j,const char*p){numberl=i;age=j;name[10]=*p;}
        ~Person(){cout<<"Decontructor of Person is called."<<endl;}
        void disp(){cout<<"Person::disp();"<<endl<<"numberl: "<<numberl<<endl<<"age: "<<age<<endl<<"name: "<<name[10]<<endl;}
        
        
};

class Student:public Person
{
    public:
    char grade;
    char lesson;
    Student(int i,int j,const char*p);
};

Student::Student(int i,int j,const char*p):Person(i,j,p){}
class Teacher:public Person
{
    public:
    char job[10];
    char workplace[30];
    Teacher(int i,int j,const char*p);
};
Teacher::Teacher(int i,int j,const char*p):Person(i,j,p){}
int main(void)
{
    Person p1(1001,29,"Haiwei");
    p1.disp();
    Student s1(1004,18,"Wei");
    s1.disp();
    Teacher t1(1006,54,"HU");
    t1.disp();
    return 0;
}