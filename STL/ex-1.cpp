#include<iostream>

using namespace std;
int main()
{
    int rupee, amount;
    cout<< "Chef wants to buy 2 ice creams, each costing X dollars"<<endl;
    cout<<"Enter the value of x which stands for the cost of each ice cream :";
    cin>>rupee;

    cout<<"Enter the amount of money chef has :";
    cin>>amount;
    cout<<endl;

    if(amount>=2*rupee)
    {
        cout<<"Chef can buy 2 ice creams"<<endl;
    }
    else
    {
        cout<<"Chef cannot buy 2 ice creams"<<endl;
    }
    
    return 0;
}