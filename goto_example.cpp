#include<iostream>
using namespace std;

int main()
{
    int i=1,j;
    
    test:
        if(i<=5)
           {
               j=1;
               hellow:
               
               if(j<=i)
                {
                     cout<<"* ";
                     j++;
                     goto hellow;
                }
                i++;
                cout<<"\n";
                goto test;
           }
}
