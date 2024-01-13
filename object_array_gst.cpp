#include<iostream>
using namespace std;

class GST
{
    double prise,quantity,gst,totalgst,billamount,netbill;
    int number;

    public:

    GST()
    {
        cout<< endl << "<----------Ente Bill with GST value--------->" << endl;

        cout<<"Enter Product number:";
        cin>> number;

        cout<<"Enter Prise:";
        cin>> prise;

        cout<<"Enter Quantity:";
        cin>> quantity;

        billamount = prise * quantity;
        cout<<"Enter Bill Amount:" << billamount << endl;
        
        gst= (prise*18)/100;
        totalgst= quantity * gst;
        netbill= billamount + totalgst;

        cout<<"The Gst is:"<< gst << endl;
        cout<<"The Total GSt is:"<< totalgst<< endl;
        cout<<"The Netbill is:" << netbill << endl;
    }

    void getdata()
    {
        cout<< number <<"\t" <<prise <<"\t" <<quantity <<"\t" <<billamount <<"\t" <<gst <<"\t" <<totalgst <<"\t" <<netbill << endl;
    }

};

int main()
{
    GST gst[3];

    cout <<endl <<"************************************************************"<<endl;
    cout<<"<---------------------[GST BILL]------------------>"<< endl;
    cout <<endl <<"************************************************************"<<endl;
    cout<<endl<< "No\t" << "Prise\t" <<"Qty\t" <<"BAmo\t" <<"GST\t" <<"T GST\t" <<"Netbill\t" << endl;
    cout <<endl <<"************************************************************"<<endl;

    
    for(int i=0; i<3; i++)
    {
        gst[i].getdata();
    }
    cout <<endl <<"************************************************************"<<endl;

}