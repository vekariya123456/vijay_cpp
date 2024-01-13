#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream <<"My Name is Vijay";
        filestream <<"\ni Go to Skill Qode Daily ";
        filestream <<"\nAnd i learn the Back end Developer SkillQode";
        filestream.close();
    }
    
    else
    {
        cout<<"FIle Opening is Fail";
    }
    return 0;
}