#include<iostream>
using namespace std;
int main()
{
    int math[5],sci[5],guj[5],total[5],per[5];
    int i;
    char grade[5];
    
    for(i=0;i<5;i++)
       {
           cout<<"\n"<<(i+1)<<".Enter Student Marks--->\n";
           
           cout<<"Enter Math Mark=";
           cin>>math[i];
           
           cout<<"Enter Science Mark=";
           cin>>sci[i];
           
           cout<<"Enter Guj Mark=";
           cin>>guj[i];
           
           total[i]=math[i]+sci[i]+guj[i];
           per[i]=total[i]/3;
       }
       
       for(i=0;i<5;i++)
         {
             if(per[i]>=90)
               {
                   grade[i]='A';
               }
            else if(per[i]>=70)
                {
                    grade[i]='B';
                }    
                
            else if(per[i]>=50)
                {
                    grade[i]='C';
                }
            else if(per[i]>=35)
                {
                    grade[i]='D';
                }
            else
                {
                    grade[i]='F';
                }
         }
         
         
         cout<<"\nMath\tSci\tGuj\tTotal\tPer\tGrade\n";
         
         for(i=0;i<5;i++)
           {
              cout<<"\n"<<math[i]<<"\t"<<sci[i]<<"\t"<<guj[i]<<"\t"<<total[i]<<"\t"<<per[i]<<"\t"<<grade[i];  
           }
            
                
             
             
            
}
