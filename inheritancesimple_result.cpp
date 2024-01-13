#include<iostream>
using namespace std;

class Student
{
    protected:
    
    int math,sci,guj,total_marks,per,Roll_No;
    string name;
    
    public:
    void setdata()
    {
        cout<<"Enter  Student Name:";
        cin>>name;

        cout<<"Enter  Student Roll No:";
        cin>>Roll_No;        
        
        cout<<"Enter Maths Marks:";
        cin>>math;
        
        cout<<"Enter Science Marks:";
        cin>>sci;
        
        cout<<"Enter Gujrati Marks:";
        cin>>guj;
        
        total_marks=math+sci+guj;
        per=total_marks/3;
        
        
    }
};

class Result : private Student
{
    
public:
    void getdata()
    {
        setdata();
        
        cout<<"\n\nStudent Name is:"<<name << endl;
        cout<<"Student Roll No is:"<<Roll_No << endl;
        cout<<"Maths Marks is:" <<math << endl;
        cout<<"Science Marks is:" <<sci << endl;
        cout<<"Gujrati Marks is:" <<guj << endl;
        cout<<"Total Marks is:"<<total_marks <<endl;
        cout<<"Percentage is:"<<per << endl;

        cout<< endl <<"Name\t"<<"RollNO\t"<<"Maths\t"<<"Science\t"<<"Gujrati\t"<<"Total\t"<<"Percentage\t"<<endl;

        cout<<name <<"\t" <<Roll_No <<"\t" <<math <<"\t"<<sci <<"\t" <<guj <<"\t" <<total_marks <<"\t" <<per << endl;
    }
};

int main()
{
    Result result;
    result.getdata();
    
    
}


