#include <iostream>

using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount();
    void deposit(float);
    void withdraw(float);
    float getBalance();
};

BankAccount::BankAccount()
{
    balance = 0;
}

float BankAccount::getBalance()
{
    return balance;
}

void BankAccount::deposit(float amount)
{
    balance += amount;
}

int main()
{
    BankAccount checking;
    BankAccount savings;

    float balance = checking.getBalance();
    cout << "Balance: " << balance << endl;

    float deposit = 10.0;
    checking.deposit(deposit);

    balance = checking.getBalance();
    cout << "Balance: " << balance << endl;

    return 0;
}