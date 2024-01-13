#include<iostream>
using namespace std;
int main()
{
    int i,n,a=1;
    
    cout<<"Enter n=";
    cin>>n;
    
    for(i=1;i<n;i++)
       {
           cout<<i*a<<" ";
           
           a*=2;
       }
    
}

