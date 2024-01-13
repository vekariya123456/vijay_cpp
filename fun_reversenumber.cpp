#include<iostream>
using namespace std;

int reverse()
{
       int n,r;
       
       cout<<"Enter Numner n=";
       cin>>n;
       
       while(n>0)
          {
              r=n%10;
              
              cout<<r;
              
              n=n/10;
          }
       
}

int main()
{
    reverse();
}
  
