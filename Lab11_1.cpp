#include<iostream>
using namespace std;
struct Student
{
    int number;
    char name[10];
    char sex;
};
struct Book
{
    char name[20];
    char author[15];
    char express[20];
    double price;
};

template<class T>
class Store
{
    private:
    T item;
    bool haveValue;
    public:
    Store();
    T &getElem();
    void putElem();
    void putElem(const T &x);
};
template<class T>
Store<T>::Store():haveValue(false){}

template<class T>
T &Store<T>::getElem()
{
    if(!haveValue)
    {
        cout<<"No item resent!"<<endl;
        exit(1);
    }
    return item;
}

template<class T>
void Store<T>::putElem(const T&x)
{
    haveValue=true;
    item=x;
}

int main(void)
{
    Student std1={1001,"Judy",'F'};
    Store<Student>s1;
    s1.putElem(std1);
    cout<<"The student id is "<<s1.getElem().number<<" Name is: "<<s1.getElem().name<<endl;
    Book bk1={"Who steal my canke?","Hulian","NightmareE",30.6};
    Store<Book>s2;
    s2.putElem(bk1);
    cout<<"The book name is: "<<s2.getElem().name<<" Price is: "<<s2.getElem().price<<endl;

}  