#include<iostream>
using namespace std;

class AREA
{
    
    public:
    AREA(double r)
    {
       cout<<"Area of Cirlce is:"<<3.14 * r * r;
    }

    AREA(int s)
    {
        cout<<"Area Of Square is:"<< s * s;
    }

    AREA(double w,double h)
    {
        cout<<"Area Of Rectangal is:"<< w * h;
    }
    
    AREA(int b,int h)
    {
        cout<<"Area Of Triangal is:"<< (b * h)/2;
    }
    AREA(string name)
    {
        cout<<"string name is:"<<name;
    }
};

int main()
{
    AREA area("vijay");
}