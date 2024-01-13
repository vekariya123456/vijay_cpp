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

    friend AREA operator++(AREA &a);
};

AREA operator++(AREA &a)
{
    AREA area;
        
        area.wit= a.wit++;
        area.len= a.len++;
        
        return area;
}
int main()
{
    AREA R1;
    
    R1.setdata(4,4);
    cout<<"Area of Rectangal 1 is:"<< R1.getdata() << endl;
    
    ++R1;
    cout<<"Area of Rectangal 2 is:"<< R1.getdata() << endl;
}
