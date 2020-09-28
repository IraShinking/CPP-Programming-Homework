//除零溢出和数值越界

#include <iostream>
#include <cmath>

using namespace std;
class MyException
{
    public:
    MyException(double a, double b) : a(a), b(b) {}
    ~MyException() {}
    int checkaType() {if(b==0.0) return 1; else if(a>100.0||b>100.0)return 2; else return 0;}

private:
    double a;
    double b;
};

void divide(double a,double b) throw (MyException)
{
    if(b==0.0||b==0)
        throw MyException(a,b);
    else if(a>100.0||b>100.0)
        throw MyException(a,b);
    else 
        cout<<"The result of a/b is: "<<a/b;

}

int main(void)
{
    double a=0.0,b=0.0;
    cout<<"Input two float numbers less than 100 and none 0:";
    cin>>a>>b;
    try
    {
        divide(a,b);
    }
    catch(MyException & e)
    {
        if(e.checkaType()==2)//a or b bigger than 100
        {
            cout<<endl<<"The number input are oversize.";
        }
        else if(e.checkaType()==1)//b equals 0
        {
            cout<<endl<<"Can not divided by 0!";
        }
    }
    cout<<endl<<"You did it.";

    
}