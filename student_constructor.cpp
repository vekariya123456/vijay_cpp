#include<iostream>
using namespace std;

class student
{
    int admno;
    char sname[20];
    float eng,math,sci,total;

    float ctotal()
     {
        return eng+math+sci;
     }

     public:
     student()
     {
        cout<<"Enter studenr Admison number:";
        cin>>admno;
        
        cout<<"Enter studenr Name:";
        cin>>sname;
        
        cout<<"Enter eng Martks=";
        cin>>eng;
        cout<<"Enter Math Martks=";
        cin>>math;
        cout<<"Enter Science Martks=";
        cin>>sci;

        total=ctotal();
     }

     void showdata()
     {
        cout<<"\nStudent Addnumber is:"<<admno;
        cout<<"\nStudent Name is:"<<sname;
        cout<<"\nEng\tmath\tsci\tTotal";
        cout<<"\n" << eng << "\t" << math << "\t" << sci << "\t" << total;
     }
};

int main()
{
    student stu;

    
    stu.showdata();

    
}
