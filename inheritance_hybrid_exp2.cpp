#include<iostream>
using namespace std;

class Vehical
{
    public:
    void display()
    {
        cout<<"This is a Vehical:"<< endl;
    }
};

class car : public Vehical
{
    public:
    void dis()
    {
        display();

        cout<<"This carmodel is a Electric Car"<< endl;
    }
};

class Bicycle
{
    public:
    void Bike()
    {
        cout<<"This Activamodel is Elecric carmodel"<<endl;
    }
};

class Electric : public car, public Bicycle
{  
    public:
    void Show()
    {
        dis();
        Bike();

        cout<<"The above model is a Electric Vehical:"<< endl;
    }

};

int main()
{
    Electric elect;

    elect.Show();
}