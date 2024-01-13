#include<iostream>
using namespace std;

class BOOK{
    
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE,totalcost;
    
int TOTAL_COST(int number)
{ 
    totalcost=number*PRICE;
    return totalcost;
}

public:
void INPUT()
{
    cout<<"Read BOOK NO is:";
    cin>>BOOK_NO;
    
    cout<<"BOOK Title is:";
    cin>>BOOKTITLE;
    
    cout<<"Enter Book Prise=";
    cin>>PRICE;
}
int PURCHASE()
{   
    int N;
    
    cout<<"Number Of Copies to be Purchased=";
    cin>>N;
    
      totalcost=TOTAL_COST(N);
      
    cout<<"\nTotal Cost To Be Paid By User Is="<<totalcost;  
}

};

int main()
{
    BOOK cost;
    
    cost.INPUT();
    cost.PURCHASE();
}

