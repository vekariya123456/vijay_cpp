#include<iostream>
using namespace std;

class function
{
    public:

    void AREA(double r)
    {
        cout<<"Area of Circle is:"<< 3.14 * r * r <<endl;
    }

    void AREA(int s)
    {
        cout<<"Area of Square is:"<< s * s <<endl;
    }

    void AREA(int w,int h)
    {
        cout<<"Area of Rectangal is:"<< w * h <<endl;
    }

    void AREA(int b,double h)
    {
        cout<<"Area of Triangal is:"<< (b*h)/2 <<endl;
    }

    void AREA(string name)
    {
        cout<<"String Name is:"<<name <<endl;
    }
};

int main()
{
    function ol;

    ol.AREA(10.20);
    ol.AREA(10);
    ol.AREA(10,20);
    ol.AREA(30,20.10);
    ol.AREA("Area calculation");
}