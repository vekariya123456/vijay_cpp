#include<iostream>
using namespace std;

class REPORT{

    int admo;
    char name[20];
    float marks[5],totalmarks,average;
    


int GETAVG()
{

    average=totalmarks/5;
    return average;
}

public:

void READINGFO()
{   
    cout<<"Enter adno=";
    cin>>admo;
    
    cout<<"Enter Name:";
    cin>>name;
    
    cout<<"Enter 5 Subject Marks:";
    
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
    REPORT marksavg;
    
    marksavg.READINGFO();
    marksavg.DISPLAYINFO();
}
    
    

