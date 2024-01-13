#include<iostream>
using namespace std;

int fibonaci(int n)
{
    if(n==0)
      {
          return 0;
      }
    else if(n==1)
      {
          return 1;
      }
    else
      {
          return fibonaci(n-1)+fibonaci(n-2);
      }
}


int main()
{
     int i,number;
     
     cout<<"Enter number=";
     cin>>number;
     
     for(i=0;i<number;i++)
     
      {
          cout<<fibonaci(i)<<",";
      }
}
