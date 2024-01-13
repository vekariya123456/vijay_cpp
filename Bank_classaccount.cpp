#include<iostream>
using namespace std;

class Bank
{
    double  deposite,withdraw,balance=0
    ;

    public:
    
    void deposite1()
    {
        cout<<"Enter the Deposite Amounnt:";
        cin>>deposite;
        
        balance= balance + deposite;
    } 

    void withdraw1()
    {
        cout<<"Enter Withdraw amount:";
        cin>>withdraw;
        
        if(balance > 0 && withdraw <= balance)
          {
            balance= balance - withdraw;
          }
        else
         {
            cout<<"Insuffieciemt Balance"<< endl;
         }    
    } 
    
    void SHOWDATA()
       {
          cout<<"The current Balance is:"<< balance << endl;
       } 
};

int main()
{
    int choice;

    Bank bank;

    cout<<"Prees 1 for Deposite Amount:"<< endl;
    cout<<"Prees 2 for Withdraw Amount:"<< endl;
    cout<<"Prees 3 for Show Balance:"<< endl;
    cout<<"Prees 4 for Exit Program:"<< endl;
    cout<<"\n\n";

    do{
        cout<<"Press Button For Your Choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
             bank.deposite1();
             break;

            case 2:
             bank.withdraw1();
             break;
            
            case 3:
             bank.SHOWDATA();
             break;
            
            case 4:
             cout<<"Exit From Account"<< endl;
             break;

             default:
             {
                cout<<"Enter Invalid Option"<<endl;
                break;
             }
        }
    }
    while (choice!=0);
    
}  