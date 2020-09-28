#include<iostream>
using namespace std;

class Complex
{
    public:
    Complex(double r=0.0,double i=0.0):real(r),imag(i){}
    void operator++();
    void operator--();
    void operator++(int);
    void operator--(int);
    void display() const;
    private:
    double real;
    double imag;
};
void Complex::operator++()
{
    real+=1.0;
    imag+=1.0;
}
void Complex::operator++(int)
{
    real+=1.0;
    imag+=1.0;
}
void Complex::operator--(int)
{
    real-=1.0;
    imag-=1.0;
}
void Complex::operator--()
{
    real-=1.0;
    imag-=1.0;
}

void Complex::display() const
{
    cout<<"("<<real<<","<<imag<<")"<<endl;
}

int main()
{
    Complex c1(5,4),c2(2,10);
    c1.display();
    c2.display();
    cout<<"(++c1)=";
    ++c1;
    c1.display();
    cout<<"(--c2)=";
    --c2;
    c2.display();
    cout<<"(c1++)=";
    c1++;
    c1.display();
    cout<<"(c2--)=";
    c2--;
    c2.display();
    return 0;

}