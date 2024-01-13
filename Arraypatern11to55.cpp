#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,k=11;
    
    for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
               {
                   a[i][j]=k;
                   k++;
               }
               k+=5;
        }
    
    for(i=0;i<5;i++)
        {
             for(j=0;j<5;j++)
               {
                   cout<<a[i][j]<<" ";
               }
               
               cout<<"\n";
        }
}
