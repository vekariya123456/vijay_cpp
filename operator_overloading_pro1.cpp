#include<iostream>
using namespace std;

class AREA
{
    int r;
    
    public:
    void setdata(int radius)
    {
        r=radius;
    }
    
    AREA operator+(AREA &a)
    {
        AREA area;
        
        area.r = r + a.r;
        
        return area;
    }
   
    int getdata()
    {
        return 3.14 * r * r;
    }
};

int main()
{
    AREA c1,c2,c3;
    
    c1.setdata(10);
    cout<< "Area of circle 1 is:"<<c1.getdata() << endl;
    
    c2.setdata(5);
    cout<< "Area of circle 2 is:"<<c2.getdata() << endl;
    
    c3 = c1 + c2;
    cout<<"Area of circle 3 is:"<<c3.getdata() << endl;
    
}
