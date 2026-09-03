#include <iostream>
using namespace std;

class BankAccount {
private:
    string accHolder;
    double balance;

public:
    BankAccount(string name,double initialBalance) {
        accHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount\n";
            return;
        }
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount\n";
            return;
        }
        if (amount > balance) {
            cout << "Insufficient balance\n";
            return;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }

    void displayBalance() {
        cout << "\nAccount Holder: " << accHolder;
        cout << "\nCurrent Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Rohit Sharma",5000);

    acc.displayBalance();
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.withdraw(10000); // should fail
    acc.displayBalance();
    cout<<"Naitik rajput"<<endl;

    return 0;
}