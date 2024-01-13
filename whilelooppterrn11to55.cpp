#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1;
    int k=11;

    while(i<=5)
        {
            j=1;
            while(j<=5)
               {
                 cout<< k <<"\t";
                 k++;
                 j++;
               }
               cout<<"\n";
               k+=5;
               i++;
        }
}

