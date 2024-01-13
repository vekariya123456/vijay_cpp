#include <iostream>
using namespace std;

class saurastradistrict
{
    
    
    public:
    void saurastra()
    { 
        cout<<"The List Of Saurastra Disdtrict:" <<endl;
    
        cout<<"1.Rajkot"<<endl;
        cout<<"2.Junagadh"<<endl;
        cout<<"3.Porbandar"<<endl;
        cout<<"4.Somnath"<<endl;
        cout<<"5.Amreli"<<endl;
         
    }
};

class southgujaratdis
{
    public:
    void southdis()
    {
        cout<<"\n\nThe List Of South Gujarat District:"<<endl;
    
        cout<<"1.Surat"<<endl;
        cout<<"2.Bharuch"<<endl;
        cout<<"3.Tapi"<<endl;
        cout<<"4.Valsad"<<endl;
        cout<<"5.Bardoli"<<endl;
        
    }
};

class Gujarat : public saurastradistrict, private southgujaratdis
{
    public:
    void Displaydata()
    {
        cout<<"Gujarat District Name:"<<endl;
        
        saurastra();
        southdis();
    }
};

int main()
{
    Gujarat guj;
    
    guj.Displaydata();
    
}
