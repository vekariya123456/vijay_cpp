#include<iostream>
using namespace std;

class increment
{
    int wigth,length;

    public:
    void setdata(int wig, int len)
    {
        wigth= wig;
        length= len;
    }

    increment operator++(int)
    {
        increment inc;
        
        
        inc.wigth= wigth++;
        inc.length= length++;

        return inc;

    }

    int getdata()
    {
        return wigth * length;
    }

};

int main()
{
    increment inc1,inc2;

    inc1.setdata(5,5);
    cout<<"area of Rectangal 1 is:"<< inc1.getdata() << endl;

    inc1++;
    cout<<"area of Rectangal 2 is:"<< inc1.getdata() << endl;
}