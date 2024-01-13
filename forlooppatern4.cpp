#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    
    for(i=2;i<=10;i+=2)
        {
            for(j=1;j<=5;j++)
               {
                   cout<<k++<<"\t";
               }
               
            cout<<"\n";
        }
    
}
