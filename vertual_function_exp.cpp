//Runtime Polymephism
// Viertual Function

#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void showprint() // virtual function
    {
        cout<<"Base class output Print----->"<< endl;
    }
};

class Derived : public Base
{
    public:
    void showprint()
    {
        cout<<"Derived class output print---->"<< endl;
    }
};

int main()
{
    Base a, *b;
    Derived d;

    b = &a;
    b->showprint();

    b = &d;
    d.showprint();
}