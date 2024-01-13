#include<iostream>
using namespace std;

class BOX
{
    int lenght,height,breath;
    
    public:
    void setdata(int l, int h, int b)
    {
        lenght= l;
        height= h;
        breath= b;
    }
    
    BOX operator+(BOX &b)
    {
        BOX box;
        
        box.lenght=lenght + b.lenght;
        box.height=height + b.height;
        box.breath=breath + b.breath;
        
        return box;
    }
    
    int getdata()
    {
        return lenght * height * breath;
    }
};

int main()
{
    BOX box1, box2, box3;
    
    box1.setdata(2,2,2);
    cout<<"Box 1 is:"<< box1.getdata() << endl;
    
    box2.setdata(3,3,3);
    cout<<"Box 2 is:"<< box2.getdata() << endl;
    
    box3=box1 + box2;
    cout<<"Box 3 is:"<< box3.getdata() << endl;
}
