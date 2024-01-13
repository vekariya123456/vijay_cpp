#include<iostream>
using namespace std;

class batsman
{
    int bcode,innings,notout,runs,batavg;
    char bname[20];


int calavg()
  {
     batavg=runs/(innings-notout);
     return batavg;
  }

public:
batsman()
  {
    cout<<"Enter Batsman code:";
    cin>>bcode;
    
    cout<<"Enter Batsman Name:";
    cin>>bname;
    
    cout<<"Enter Batsman innings:";
    cin>>innings;
    
    cout<<"Enter Notout Innings Number:";
    cin>>notout;
    
    cout<<"Enter Batsman Runs:";
    cin>>runs;
    
    
    batavg=calavg();
    
  } 

void displaydata()
  {
    cout<<"\nBatsman code is:"<<bcode;
    cout<<"\nBatsman Nambe is:"<<bname;
    cout<<"\nBatsman Innings is:"<<innings;
    cout<<"\nBatsman Notout Innings is:"<<notout;
    cout<<"\nBatsman Runs is:"<<runs;
    cout<<"\nBatsman Batting Average is:"<<batavg;
    
    
    cout<<"\n\nNO\tNAME\tINNINGS\tNOTOUT\tRUNS\tAVERAGE\n";
    
    cout<<bcode<<"\t"<<bname<<"\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg;
    
  }

};

int main()
{
   batsman avg;
   
   avg.displaydata();
   
}




