#include<iostream>
using namespace std;

int main()

{
    int math,sci,guj,total,per;

    cout <<"enter math marks=";
    cin >> math;

    cout <<"enter sci marks=";
    cin >> sci;

    cout <<"enter guj marks=";
    cin >> guj;

    total=math+sci+guj;

    cout<<"\ntotal marks is: "<<  total;

    per=(total*100)/300;
    cout <<"\npercentage is:"<< per;
}