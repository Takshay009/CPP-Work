#include<iostream>
#include<stdexcept>

using namespace std;
int main()
{
    double balance = 1000.0;
    try
    {
        double amount;
        // Deposit
        cout << "Enter amount to deposit: ";
        cin>> amount;
        if (amount <=  0)
        {
            throw invalid_argument("Deposit amount cannot be negative.");
        }
        balance += amount;
        cout << "New balance: " << balance << endl;



        // Withdraw
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance)
        {
            throw invalid_argument("Insufficient funds.");
        }
        else if (amount <= 0)
        {
            throw invalid_argument("Withdraw amount cannot be negative.");
        }
        balance -= amount;
        cout << "New balance: " << balance << endl;
    }
    catch(exception& e)
    {
        cout<< "Exception: " << e.what() << endl;
    }
    
    return 0;
}