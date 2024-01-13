#include<iostream>
using namespace std;

class Person
{
    int id;
    string name;

    public:
    void set_p()
    {
        cout<<"Enter Person id:";
        cin>>id;

        cout<<"Enter Person name:";
        cin>>name;
    }

};

class Skill : public Person
{
    string sk;
    public:
    void set_s()
    {
        set_p();

        cout<<"Enter Person Skill:";
        cin>>sk;
    }
};

int main()
{
    Skill skill;
    
    skill.set_s();
}