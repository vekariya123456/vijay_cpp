#include<iostream>
using namespace std;

class AREA
{
    double b,h;
    
    public:
    void setdata(double breath, double height)
    {
        b= breath;
        h= height;
    }
    
    AREA operator*(AREA &a)
    {
        AREA area;
        
        area.b = b * a.b;
        area.h = h * a.h;
        return area;
    }
   
    double getdata()
    {
        return (b * h) / 2;
    }
};

int main()
{
    AREA T1,T2,T3;
    
    T1.setdata(2,2);
    cout<< "Area of Triangal 1 is:"<<T1.getdata() << endl;
    
    T2.setdata(5,5);
    cout<< "Area of Triangal 2 is:"<<T2.getdata() << endl;
    
    T3 = T1 * T2;
    cout<<"Area of Triangal 3 is:"<<T3.getdata() << endl;
    
}
