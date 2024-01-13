#include<iostream>
using namespace  std;

class ADD
{
    protected:
    int x=20;
    int y=10;
    
    public:
    void addition()
    {
        cout<<"The Addition of (" << x << "+" << y <<") is:" << x + y <<endl;
    }
};

class SUB: public ADD
{
    protected:
    int x=50;
    int y=15;
    
    public:
    void substraction()
    {
        addition();

        cout<<"The Substraction of (" << x << "-" << y <<") is:" << x - y << endl;;
    }
};

class MUL : public SUB
{   
    protected:
    int x=20;
    int y=5;

     public:
    void multification()
    {
        substraction();

        cout<<"The Multificaytion of(" << x << "*" << y <<") is:" << x * y << endl;
    }
};


int main()
{
    MUL calcucaltion;
    calcucaltion.multification();

}