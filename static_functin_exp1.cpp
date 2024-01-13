#include<iostream>
using namespace std;

class student
{
    public:
    
    static int a;
    
    student()
    {
        a++;
    }
    
    void display()
    {
        cout<<"student Number Show:"<<endl;
    }
};

int student :: a=0;

int main()
{
    student s1;
    s1.display();
    
    student s2;
    s2.display();
    
    student s3;
    s3.display();
    
    cout<<"NO of Object call is:" << student :: a << endl;
    
}
