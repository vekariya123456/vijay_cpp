#include<iostream>
using namespace std;

class REPORT{

    int admo;
    string name;
    float marks[5],totalmarks,average;
    


int GETAVG()
{

    average=totalmarks/5;
    return average;
}

public:

REPORT(int n1,string n2)
{   
    admo=n1;
    name=n2;

    
    cout<<"Enter adno=";
    cin>>admo;
    
    cout<<"Enter Name:"<<name;
    
    
    cout<<"\nEnter 5 Subject Marks:";
    
    for(int i=0;i<5;i++)
      {
          cin>>marks[i];
          
          totalmarks=totalmarks+marks[i];
      }
      
      GETAVG();
}

void DISPLAYINFO()
{
    cout<<"\nADNO is:"<<admo;
    cout<<"\nName is:"<<name;
    cout<<"\nAverage Marks Is="<<average;
}

};

int main()
{
    REPORT marksavg(25,"VIJAY");

    marksavg.DISPLAYINFO();
}
    
    

