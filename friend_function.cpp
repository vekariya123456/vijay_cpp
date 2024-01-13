#include<iostream>
using namespace std;

class AREA
{
    int wit,len;
    
    public:
    
    void setdata(int wight, int length)
    {
        wit= wight;
        len= length;
    }

    
    int getdata()
    {
        return wit * len;
    }

    friend AREA operator+(AREA &a, AREA &b);
};

AREA operator+(AREA &a, AREA &b)
{
    AREA area;
        
        area.wit= a.wit + b.wit;
        area.len= a.len + b.len;
        
        return area;
}
int main()
{
    AREA R1,R2,R3;
    
    R1.setdata(4,4);
    cout<<"Area of Rectangal 1 is:"<< R1.getdata() << endl;
    
    R2.setdata(10,10);
    cout<<"Area of Rectangal 2 is:"<< R2.getdata() << endl;
    
    R3= R1+R2;
    cout<<"Area of Rectangal 3 is:"<< R3.getdata() << endl;
    
}
