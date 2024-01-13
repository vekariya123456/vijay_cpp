#include<iostream>
using namespace std;

int a[3][3];
int i,j;

void arrfun()
{
   for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
          {
             cout<<a[i][j]<<" ";
          }
          cout<<"\n";
     }    
}

int main()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          { 
            cout<<"Enter Array Value=";
            cin>>a[i][j];
          } 
    }
    
    arrfun();
}    
    
    

