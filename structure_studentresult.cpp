#include<iostream>
using namespace std;

struct result
{
    int math[3],sci[3],guj[3],total[3],per[3];
    char name[3],grade[3];
};

int main()
{
    struct result a;
    
    for(int i=0;i<3;i++)
    
    {
        cout<<"\n\nEnter student Name-->";
        cin>>a.name[i];
        
        cout<<"\nEnter Math Marks=";
        cin>>a.math[i];
        
        cout<<"\nEnter Science Marks=";
        cin>>a.sci[i];
        
        cout<<"\nEnter Gujrati Marks=";
        cin>>a.guj[i];
        
        a.total[i]=a.math[i]+a.sci[i]+a.guj[i];
        a.per[i]=a.total[i]/3;
        
        cout<<"\nThe Total Marks is="<<a.total[i];
        cout<<"\nPercentage is="<<a.per[i];
        
        if(a.per[i]>=90)
          {
              a.grade[i]='A';
          }
        else if(a.per[i]>=70)
           {
               a.grade[i]='B';
           }
        else if(a.per[i]>=50)
           {
               a.grade[i]>'C';
           }    
         else if(a.per[i]>=35)
          {
            a.grade[i]='D';
            
          }
        else
          {
              a.grade[i]='F';
          }
          
        cout<<"Grade is="<<a.grade[i];
    }
}

