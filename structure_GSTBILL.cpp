#include<iostream>
using namespace std;

struct gstbill
{
    int prise,quantity,gst,totalgst,billamt,netbill;
    char name[50];
};

int main()
{
    struct gstbill a;
    
    cout<<"Enter product Name-->";
    cin>>a.name;
    
    cout<<"\nEnter Prise=";
    cin>>a.prise;
    
    cout<<"\nEnter Quantity= ";
    cin>>a.quantity;
    
    cout<<"Enter bill amount=";
    cin>>a.billamt;
    
    a.gst=(a.prise*18)/100;
    
    a.totalgst=a.gst*a.quantity;
    
    a.netbill=a.billamt+a.totalgst;
    
    cout<<"\nGST is="<<a.gst;
    cout<<"\nTotal GST is="<<a.totalgst;
    cout<<"\nNetbill is="<<a.netbill;
    
}


