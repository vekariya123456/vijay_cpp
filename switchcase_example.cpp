#include<iostream>
using namespace std;

int main()
{
    int a=40,b=20,ch;
    
    cout<<"1.Additin";
    cout<<"\n2.substrction";
    cout<<"\n3.multification";
    cout<<"\n4.Division";
    
    cout<<"\n\nEnter Your Choice-->";
    cin>>ch;
    
    switch(ch)
    {
        case 1:
           cout<<"a and b Additin is="<<a+b;
           break;
           
        case 2:   
           cout<<"a and b substractin is="<<a-b;
           break;
           
        case 3:  
           cout<<"a and b multification is="<<a*b;
           break;
        
        case 4:   
           cout<<"a and b Division is="<<a/b;
           break;
           
        default:
           cout<<"Enter Wrong Choice";
           break;
    }       
           
}
