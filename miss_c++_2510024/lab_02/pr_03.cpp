
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int account_number;
    double balance;

public:
    BankAccount(int acc, double bal)
    {
        account_number = acc;
        balance = bal;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b(101, 5000);

    b.deposit(1000);
    b.withdraw(2000);
    b.display();

    return 0;
}
