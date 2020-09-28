#include<iostream>
using namespace std;

class BaseClass
{
    public:
    virtual void fn1() const;
    void fn2() const;
};
void BaseClass::fn1() const
{
    cout<<"BaseClass::fn1() is called."<<endl;
}
void BaseClass::fn2() const
{
    cout<<"BaseClass::fn2() is called."<<endl;
}
class DerivedClass:public BaseClass
{
    public:
    void fn2() const;
    virtual void fn1() const;
};
void DerivedClass::fn2() const
{
    cout<<"DerviedClass::fn2() is called."<<endl;
}
void DerivedClass::fn1() const
{
    cout<<"DerviedClass::fn1() is called."<<endl;
}

int main(void)
{
    DerivedClass Dvc1;
    BaseClass Bc1;
    DerivedClass *pt=&Dvc1;
    cout<<"Call by the DerivedClass pointer."<<endl;
    pt->fn1();
    pt->fn2();
    BaseClass *pv=&Bc1;
    pv->fn1();
    pv->fn2();
    cout<<"Change the BaseClass pointer to DerivedClass."<<endl;
    pv=&Dvc1;
    pv->fn1();
    pv->fn2();
    
    return 0;

}


