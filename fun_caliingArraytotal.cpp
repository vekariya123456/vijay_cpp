#include<iostream>
using namespace std;

int calculatingtotal(int arr[],int size)
{
    int runningtotal=0;
    
    for(int i=0;i<size;i++)
       {
           runningtotal=runningtotal+arr[i];
       }
       
       return runningtotal;
}


int main()
{
    int arr[50],size;
    
    cout<<"Enter Value Size=";
    cin>>size;
    
    for(int i=0;i<size;i++)
       {
           cout<<(i+1)<<".Enter Array Value=";
           cin>>arr[i];
       }
       
       int runningtotal=calculatingtotal(arr,size);
       
       cout<<"Running Total is="<<runningtotal;
    
    
}
