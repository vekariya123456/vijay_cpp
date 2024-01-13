#include<iostream>
using namespace std;

class Base
{
    public:
    void display()
    {
       cout<<"Base Class object output print......"<<endl; 
    }

    virtual void showPrint()=0;
};

class Derived : public Base
{
    void display()
    {
        cout<<"Derived Class object output print"<< endl;
    }

    void showPrint()
    {
        cout<<"Derived Class Output Print"<< endl;
    }
};

int main()
{
    Base *b;
    Derived d;

    b->display();

    b= &d;
    b->display();
    b->showPrint();
    
}
