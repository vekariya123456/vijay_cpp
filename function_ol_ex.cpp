#include<iostream>
using namespace std;

class test
{
    int a,b;

    public:
    void setData()
    {
        cout <<"value of a is:"<< endl;
        cin >> a;
    }

    void setData(int a)
    {
        b=a;
        cout <<"Value of b is:" << b << endl;
    }
};

int main()
{
    test te;

    te.setData(20);

    te.setData();
}