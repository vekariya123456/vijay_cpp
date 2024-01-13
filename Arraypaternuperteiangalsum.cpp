#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,k=1,sum=0;
    
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
               {
                   a[i][j]=k++;
               }
        }
    
    for(i=0;i<3;i++)
        
            { 
               for(j=0;j<3;j++)
               
               if(i>j)
               {
                   cout<<a[i][j]<<" ";
                   sum=sum+a[i][j];
               }
               cout<<"\n";
            }   
            
            cout<<"The sum is="<<sum;
        
}
