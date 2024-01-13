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
void FEEDINFO()
{
    cout<<"Enter Flight NUmber=";
    cin>>flight_number;
    
    cout<<"Enter Destination:";
    cin.ignore();
    getline(cin,Destination);
    
    
    cout<<"Enter Distance value=";
    cin>>Distance;
    
    CALFUEL();
    
}    

void SHOWINFO()
{
    cout<<"\nFlight Number is="<<flight_number;
    cout<<"\nDestination Name is:"<<Destination;
    cout<<"\nDistance is:"<<Distance;
    cout<<"\nFuel Required:"<<fuel;
}


};

int main()
{
    FLIGHT fl;
    
    fl.FEEDINFO();
    fl.SHOWINFO();
    
    return 0;
}

