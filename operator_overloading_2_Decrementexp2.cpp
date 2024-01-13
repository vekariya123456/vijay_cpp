#include<iostream>
using namespace std;

class Decrement
{
    int area;
    int side;

    public:
    void setdata(int s)
    {
        side= s;
    }

    Decrement operator--(int)
    {
        Decrement dec;

        dec.side= side--;

        return dec;
    }

    int getdata()
    {
        area= 6 * side * side;
        
        return area;
    }
};

int main()
{
    Decrement dec1,dec2;

    dec1.setdata(5);
    cout<<"Area of Cube1 is:"<< dec1.getdata() << endl;

    dec1--;
    cout<<"Area of Cube2 is:"<< dec1.getdata() << endl;
    
}

