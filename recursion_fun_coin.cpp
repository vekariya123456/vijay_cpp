#include<iostream>
using namespace std;

void a(int amount)
{
    int coin[5]={25,10,5,2,1};
    int numcoin[5]={0,0,0,0,0};
    int i;
    
    for(i=0;i<5;i++)
       {
           numcoin[i]=amount/coin[i];
           amount=amount%coin[i];
       }
       
       cout<<"25:"<<numcoin[0]<<"\n";
       cout<<"10:"<<numcoin[1]<<"\n";
       cout<<"5:"<<numcoin[2]<<"\n";
       cout<<"2:"<<numcoin[3]<<"\n";
       cout<<"1:"<<numcoin[4]<<"\n";
}


int main()
{
    int rs;
    
    cout<<"Enter Rs Value=";
    cin>>rs;
    
    a(rs);
}
