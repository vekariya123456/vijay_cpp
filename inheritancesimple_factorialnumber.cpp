#include<iostream>
using namespace std;

class factorial
{
    protected:
    
    int num;
    
    public:
    
    void setdata()
    {
        cout<<"Enter Number:";
        cin>>num;
    }

};

class Fnumber : private factorial
{
public:
 void calculatefactorial_number()
 {
    
    setdata();
    
    long long fact=1;
    
    for(int  i=1;i<=num; i++)
    {
        fact=fact*i;
    }
    
    cout<<"The factorial Number is:"<< fact << endl;
 }

    
};

int main()
{
    Fnumber fnumber;
    fnumber.calculatefactorial_number();
}
 
