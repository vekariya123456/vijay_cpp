#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1;
    int k=65;

    while(i<=5)
        {
            j=1;
            while(j<=i)
               
             {  if(j%2==1)
               {
                 cout<< (char)(k+32) <<"\t";
               }
               else
               {
                  cout<< (char)k <<"\t";
               }
               k++;
               j++;
            }
            cout<<"\n";
            i++;
        
        }    
}