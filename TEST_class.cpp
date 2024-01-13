#include<iostream>
using namespace std;

class TEST
{
     int Testcode,NoCandidat,CenteReqd,Centers;
     char str[];
     
int CALCNTR()
  {
      Centers=(NoCandidat/100+1);
      return Centers;
  }

public:
void SCHEDULE()
  {
      cout<<"Enter Testcode is:";
      cin>>Testcode;
      
      cout<<"Enter Description:";
      cin>>str;
      
      cout<<"Ente No Of Candidat:";
      cin>>NoCandidat;
      
      Centers=CALCNTR();
  }
  
void DISPTEST()
 {
     cout<<"\nTestcode is:"<<Testcode;
     cout<<"\nDescription is:"<<str;
     cout<<"\nNo Of CandidaTe is:"<<NoCandidat;
     cout<<"\nNumber OF Center is:"<<Centers;

 }
 
};

int main()
{
    TEST data;
    
    data.SCHEDULE();
    data.DISPTEST();
    
    return 0;
    
}
