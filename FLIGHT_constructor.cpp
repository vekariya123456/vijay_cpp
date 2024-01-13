#include<iostream>
using namespace std;

class FLIGHT{
    
    int flight_number;
    string Destination;
    float Distance,fuel;
    
void CALFUEL()
{
    if(Distance<=1000)
      {
          fuel=500;
      }
    else if(Distance>1000 && Distance<=2000)
      {
          fuel=1100;
      }
    else
      {
          fuel=2200;
      }
}

public:
FLIGHT(int n1,int n2)
{
    flight_number=n1;
    Distance=n2;
    
    cout<<"Enter Flight Number="<<flight_number;
    
    cout<<"\nEnter Destination:";
    cin>>Destination;
    
    cout<<"Enter Distance value="<<Distance;
    
    CALFUEL();
    
}    

void SHOWINFO()
{
    cout<<"\n\nFlight Number is="<<flight_number;
    cout<<"\nDestination Name is:"<<Destination;
    cout<<"\nDistance is:"<<Distance;
    cout<<"\nFuel Required:"<<fuel;
}


};

int main()
{
    FLIGHT fl(2020,1200);
    
    fl.SHOWINFO();
  
}


