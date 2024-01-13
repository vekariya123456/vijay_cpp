#include<iostream>
using namespace std;

class AREA
{
    int surface;
    
    public:
    
    void setdata(int s)
    {
        surface=s;
    }
    
    AREA operator/(AREA &a)
    {
        AREA area;
        
        area.surface= surface / a.surface;
    
        return area;
    }
    
    int getdata()
    {
        return 6 * (surface * surface);
    }
};

int main()
{
    AREA s1,s2,s3;
    
    s1.setdata(6);
    cout<<"Area of Square 1 is:"<< s1.getdata() << endl;
    
    s2.setdata(6);
    cout<<"Area of Square 2 is:"<< s2.getdata() << endl;
    
    s3= s1 / s2;
    cout<<"Area of Square 3 is:"<< s3.getdata() << endl;
    
}

