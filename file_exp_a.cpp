#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char viajy[50];
    //store File Data

    ofstream vv;
    vv.open("file2.txt");

    cout<<"Please Enter Your Name:"<< endl;
    cin.getline(viajy, 100);
    vv << viajy << endl;

    cout<<"Please Enter contact Number:" << endl;
    cin >> viajy;
    cin.ignore();
    vv << viajy << endl;

    vv.close();

    //Read File Data
    ifstream nv;
    string line;
    nv.open("file2.txt");

    cout << endl <<"Readind From text file:" << endl;
    while (getline(nv, line))
    {
        cout<< line  << endl;
    }

    nv.close();

    return 0;

}