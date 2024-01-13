#include<iostream>
using namespace std;
int main()
{
    char i,j,k=65;
    
    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
              
             { 
              if(i%2==1) 
               {
                   cout<<(char)k<<" ";
               }
              else 
               {
                   cout<<(char)(k+32)<<" ";
               }
              k++;
             }
            cout<<"\n";   
        }
}
