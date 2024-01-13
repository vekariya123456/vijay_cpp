#include<iostream>
using namespace std;

class Shap
{
    public:
    virtual void draw()
    {
        cout<<"The Following shape are draw:"<< endl;
        
    }
};

class Rectangal : public Shap
{
    public:
    void draw()
    {
        cout<<"Rectangal are drawing"<< endl;
    }
};

class Triangal : public Shap
{
    public:
    void draw()
    {
        cout<<"Triangal are drawing"<< endl;
    }
};

class Circle : public Shap
{
    public:
    void draw()
    {
        cout<<"Circle are drawing"<< endl;
    }
};

int main()
{
    Shap s, *a;
    Rectangal r;
    Triangal t;
    Circle c;
    
    a= &s;
    a->draw();
    
    a= &r;
    a->draw();
    
    a= &t;
    a->draw();
    
    a= &c;
    a->draw();
    
}

