#include <iostream>
#include "Queue.h"
using namespace std;
class Complex
{
public:

    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator*(const Complex &c);
    void setComplex(double r,double i){real=r;image=i;}
    
    void show();

private:
    double real=0.0;
    double image=0.0;
};

void Complex::show()
{
    cout << "The complex number is:"<<real<<"+"<<image<<"i"<<endl;
}
Complex Complex::operator+(const Complex &c)
{
    Complex tmp;
    tmp.real=real+c.real;
    tmp.image=image+c.image;
    return tmp;
}
Complex Complex::operator-(const Complex &c)
{
    Complex tmp;
    tmp.real=real-c.real;
    tmp.image=image-c.image;
    return tmp;
}
Complex Complex::operator*(const Complex &c)
{
    Complex tmp;
    tmp.real=real*c.image-image*c.real;
    tmp.image=image*c.real+real*c.image;
    return tmp;
}

int main(void)
{
    Queue<Complex> complexQ;
    Complex cmpx[10];
    double realnumber, img;
    int i = 0;
    
    for (i = 0; i < 3; i++)
    {
        cout << "Input  the Complex:";
        cin>>realnumber;cin>>img;
        
        cmpx[i].setComplex(realnumber,img);
        complexQ.insert(cmpx[i]);
    }cout<<endl;
    cout<<"Output the "<<i<<"complex: "<<endl;

    int j=0;
    for(j=0;!complexQ.isEmpty();j++)
    {   
        cmpx[j]=complexQ.remove();
        cmpx[j].show();

    }

    return 0;
}
