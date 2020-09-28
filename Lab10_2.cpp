#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void shout() const; 
};
void Animal::shout() const
{
    cout<<"Animals can shout."<<endl;
}

class Dog:public Animal
{
    public:
    virtual void shout() const;
};
void Dog::shout() const
{
    cout<<"Dogs woo woo woo."<<endl;
}
class Cat:public Animal
{
    public:
    virtual void shout() const;
};
void Cat::shout() const
{
    cout<<"Cats mew mew mew."<<endl;
}
class Sheep:public Animal
{
    public:
    virtual void shout() const;
};
void Sheep::shout() const
{
    cout<<"Sheep baa baa baa."<<endl;
}



int main(void)
{
    Animal animal1;
    Dog dog1;
    Cat cat1;
    Sheep sheep1;
    Animal *animalArray[]={&animal1,&dog1,&cat1,&sheep1};
    const int n=sizeof(animalArray)/sizeof(Animal *);
    for(int i=0;i<n;i++)
    {
        animalArray[i]->shout();
    }

    return 0;
}