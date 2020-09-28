#include<fstream>
#include<iostream>
using namespace std;
class Dog
{
    public:
    Dog(int weight,int age):weight(weight),age(age){}
    ~Dog(){}
    int showW(){return weight;}
    int showA(){return age;}
    void showAll(){cout<<"The dog's weight is:"<<weight<<" and age is: "<<age;}
    private:
    int weight;
    int age;

};
int main(void)
{
    Dog dog1(5,10);//weight is 5 and age is 10
    cout<<"In the normal way:"<<endl<<endl;
    ofstream out("dog.txt");//文本方式
    out<<dog1.showW()<<" "<<dog1.showA();
    cout<<dog1.showW()<<" "<<dog1.showA();
    out.close();
    int a,b;
    ifstream in("dog.txt");
    in>>a>>b;
    cout<<endl<<a<<" "<<b<<endl;
    Dog dog2(a,b);
    dog2.showAll();
    in.close();

    cout<<endl<<"Now in the binary way:"<<endl;
    ofstream out2("dog.txt",ios_base::binary);
    out2<<dog1.showW()<<" "<<dog1.showA();
    out2.close();
    ifstream in2("dog.txt",ios_base::binary);
    int c,d;
    in2>>c>>d;
    cout<<endl<<c<<" "<<d<<endl;
    Dog dog3(c,d);
    dog3.showAll();
    in2.close();
    return 0;

}