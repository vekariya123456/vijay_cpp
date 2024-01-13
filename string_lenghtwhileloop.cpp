#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int l=0;
    
    cout<<"Enter name=";
    cin>>str;
    
    while(str[l]!='\0')
    {
    
      cout<<"Char is:"<<str[l]<<"\n";
      l++;
    }
    cout<<"The string Length is="<<l;
}    
    
        
    

