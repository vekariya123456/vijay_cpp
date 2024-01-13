#include<iostream>
using namespace std;

int main()
{
    int guj,hindi,eng,totalmarks,per;
    
    cout<<"Enter Guj marks=";
    cin>>guj;
    
    cout<<"Enter Hindi marks=";
    cin>>hindi;
    
    cout<<"Enter English marks=";
    cin>>eng;
    
    totalmarks=guj+hindi+eng;
    
    cout<<"Totalmarks is="<<totalmarks<<"\n";
    
    per=totalmarks/3;
    cout<<"Persentage is="<<per<<"\n";
    
    if(per>=35)
      {
          cout<<"student pass";
      }
    else
    {
        cout<<"student Fail";
    }
}
