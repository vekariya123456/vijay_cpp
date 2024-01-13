#include<iostream>
using namespace std;

int main()
{
    int i;
    
    for(i=1;i<=15;i++)
       {
           if(i==6 || i==11)
             {
                 continue;
             }
             
             cout<<i<<"\t";
       }
}
