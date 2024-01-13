#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a,b,c;

    for(i=1;i<=5;i++)
       {
         for(j=1;j<=i;j++)
            {
                cout<<" *";
            }
            cout<<"\n";
       }

    for(a=5;a>=1;a--)
    {
        for(c=5;c>a;c--)
           {
              cout<<"  ";
           }
        for(b=1;b<=a;b++)
           {
              cout<<" +";
           }   
        cout<<"\n";   
    }  
}