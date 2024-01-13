#include<iostream>
using namespace std;
#include<math.h>

class rootnumber
{
    protected:
    
    double value;
    
    public:
    void setdata(double val)
    {
        value= val;
    }
    
};

class Root : public rootnumber
{
    public:
    
    void calculateroot()
    {
        double rootvalue;
        rootvalue = sqrt(value);
        
        cout<<"The Given Number Of Rootvalue is:"<<rootvalue << endl;
    }
};

int main()
{
    Root rootobj;
    
    double num;
    
    cout<<"Enter Find Root Number:";
    cin>>num;
    
    rootobj.setdata(num);
    
    rootobj.calculateroot();
}


