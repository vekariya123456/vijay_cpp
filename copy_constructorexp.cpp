#include<iostream>
using namespace std;

class TEST
{
    int a;
    
    public:
    TEST(int b)
    {
        a=b;
    }
    
    // bydefault created by computer
    TEST(TEST &te)
    {
        a=te.a;
    }
    void getdata()
    {
        cout<<"value of a is:"<< a << endl;
    }
};

int main()
{
    TEST tes(557);
    tes.getdata();
    
    TEST te(tes);
    te.getdata();
    
}
