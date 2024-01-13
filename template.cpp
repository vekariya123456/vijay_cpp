#include<iostream>
using namespace std;


template <class T>
void display(T t1)
    {
        cout << "Display Template:"
             <<  t1 << endl;
    }


template <class x,class y>
void Display(x a,y b)
{
    cout<<"Display Templat:-"
        << a << "\t"
        << b << endl;
}

int main()
{
    display(200);
    display(12.56);
    display('V');

    Display('V',1.25);
    Display('X',25);
    Display(25,1.25);

    return 0;
}