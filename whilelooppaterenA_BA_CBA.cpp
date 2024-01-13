#include<iostream>
using namespace std;
int main()
{
    char i='A',j='A';

    while(i<='E')
    {
        j=i;
        while(j>='A')
        {
            cout<< j <<"\t";
            j--;
        }
        cout<<"\n";
        i++;
    }
}
