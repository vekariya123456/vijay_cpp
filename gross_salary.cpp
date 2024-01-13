#include<iostream>
using namespace std;

int main()
{
    float basic,gross_salary,hra,da;
    
    cout<<"Enter Basic salary=";
    cin>>basic;
    
    if(basic>=0 && basic<=5000)
       {
           hra=basic*0.08;
           da=basic*0.20;
       }
    else if(basic>5000 && basic<=10000)
        {
            hra=basic*0.12;
            da=basic*0.30;
        }
    else if(basic>10000 && basic<=15000)
        {
            hra=basic*0.15;
            da=basic*0.40;
        }
    else 
        {
            hra=basic*0.20;
            da=basic*0.50;
        }        
        
    cout<<"HRA is="<<hra<<"\n";
    cout<<"DA is="<<da<<"\n";
    
    gross_salary=basic+hra+da;
    
    cout<<"Gross salary is="<<gross_salary<<"\n";
    
        
}
