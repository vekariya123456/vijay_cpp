#include<iostream>
using namespace std;

class AREA
{
   public:
   AREA(int r)
   {
      cout<<"Area of Circle is:"<< 3.14 * r *r;
   }
   
   AREA(double s)
   {
     cout<<"\nArea of Square is:"<< s * s;
   }
   
   AREA(double w,double h)
   {
    cout<<"\nArea of Rectangal:"<< w * h;
   }

   AREA(int b,int h)
   {
     cout<<"\nArea Of Triangal is:"<< (b * h)/2;
   }

   AREA(string name)
   {
     cout<<"\nThe Name is:"<<name;
   }

   ~AREA()
   {
      cout<<"\n\nDestructor call";
   }



};

int main()
{
    AREA a(10),b(5.14),c(10.20,10.30),d(20,20),e("vijay");
}