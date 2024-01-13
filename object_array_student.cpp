#include<iostream>
using namespace std;

class Result
{
    int sci,math,guj,eng,total;
    double per;
    string name;
    
    public:
    
    Result()
    {
        cout<<endl<<"<----------Student Marksheet---------->"<<endl;

        cout <<"Enter Student Name:";
        cin >> name;

        cout <<"Enter science marks:";
        cin >> sci;

        cout <<"Enter Maths marks:";
        cin >> math;

        cout <<"Enter Gujarati marks:";
        cin >> guj;

        cout <<"Enter English marks:";
        cin >> eng;

        total = sci + math + guj + eng ;
        per = total/4;
        cout << "Total Marks is---->" << total << endl;
        cout << "Percentage is---->" << per << endl;
}

void getResult()
{
    cout<< name <<"\t" <<sci <<"\t" <<math <<"\t" <<guj <<"\t" <<eng <<"\t" << total <<"\t" <<per <<"\t" << endl;
}

};

int main()
{
    Result result[4];
    
    cout <<endl <<"**********************************************************************"<<endl;
    cout<<"\t\t----------->[Student Result]------------"<<endl;

    cout << endl << "Name\t" << "Science\t" << "Maths\t" << "Gujrati\t" << "English\t" << "Total\t"<< "Percentage\t" << endl;
    cout <<endl <<"**********************************************************************"<<endl;
    
    for(int i=0; i<4; i++)
    {
        result[i].getResult();
    } 

}