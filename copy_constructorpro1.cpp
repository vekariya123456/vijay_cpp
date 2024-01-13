#include<iostream>
using namespace std;

class TEST
{
    int x;
    double x1;
    char x2;
    string x3;
    int x4[10];
    
    public:
    
    TEST(int a, double b, char c, string d, int e[10])
    {
        x= a;
        x1= b;
        x2= c;
        x3= d;
        
        for(int i=0; i<10; i++)
           {
              x4[i]= e[i];
           }   
    }
    
    void setdata()
    {  
        
        cout<<" value of integer is:"<< x << endl;
        cout<<" value of double is:"<< x1 << endl;
        cout<<" value of character is:"<< x2 << endl;
        cout<<" value of string is:"<< x3 << endl;
        cout<<" value of Array is:";
        for(int i=0; i<10; i++ )
        {
           cout<< x4[i] <<" ";
        }
        cout<< endl;
    }

};

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    TEST tes(20,25.5,'V',"vijay vekariay",arr);
    tes.setdata();
    
    TEST te(tes);
    te.setdata();
}

