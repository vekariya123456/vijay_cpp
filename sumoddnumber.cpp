#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    
    cout<<"Entr n=";
    cin>>n;
    
    for(i=1;i<=n;i++)
      
      if(i%2==1)
      {
          sum=sum+i;
          cout<<i<<" ";
      }
      
    cout<<"\nodd number sum is="<<sum;
}

