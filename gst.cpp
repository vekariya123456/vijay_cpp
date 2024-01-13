#include<iostream>
using namespace std;

int main()
{
    int r,q,billamt,netbill,gst,totalgst;
    
    cout<<"enter rate=";
    cin>>r;
    
    cout<<"Enetr Quantity";
    cin>>q;
    
    cout<<"Enter Bill amount=";
    cin>>billamt;
    
    gst=(r*18)/100;
    
    cout<<"GST is="<<gst<<"\n";
    
    totalgst=q*gst;
    
    cout<<"The Total Gst is="<<totalgst<<"\n";
    
    netbill=billamt+totalgst;
    cout<<"Thr netbill iS="<<netbill<<"\n";
    
    
}
