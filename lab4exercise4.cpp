/*Extend the functionality of class Account from the previous lab (implemented below) to implement 
two more bank account types. Create CurrentAccount and SavingsAccount. Sa-
vings account should have additional members to set the interest rate (per
 annum) and calculate the profit on the balance per month. Both account t-
 ypes should have a utility method to print the statement that displays t-
 he number of withdrawals, number of deposits made, and the final account 
 balance (maintain data members to store such information in derived clas-
 ses).*/
#include <iostream>
#include <string>

using namespace std;

// Enumeration for account types
enum AccountType { CURRENT, SAVINGS };

// Base class: Account
class Account {
protected:
    string accountHolder;
    double balance;
    int numWithdrawals;
    int numDeposits;
    AccountType accountType;

public:
    Account(string holder, double initialBalance, AccountType type)
        : accountHolder(holder), balance(initialBalance), numWithdrawals(0), numDeposits(0), accountType(type) {}

    // Utility method to make a deposit
    void deposit(double amount) {
        balance += amount;
        numDeposits++;
    }

    // Utility method to make a withdrawal
    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            numWithdrawals++;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Utility method to print the account statement
    virtual void printStatement() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Type: " << (accountType == CURRENT ? "Current" : "Savings") << endl;
        cout << "Number of Withdrawals: " << numWithdrawals << endl;
        cout << "Number of Deposits: " << numDeposits << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Derived class: CurrentAccount
class CurrentAccount : public Account {
public:
    CurrentAccount(string holder, double initialBalance)
        : Account(holder, initialBalance, CURRENT) {}

    // Override the withdraw method to allow overdrafts
    void withdraw(double amount) {
        balance -= amount;
        numWithdrawals++;
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(string holder, double initialBalance, double rate)
        : Account(holder, initialBalance, SAVINGS), interestRate(rate) {}

    // Calculate profit on balance per month based on interest rate
    double calculateProfit() {
        return (balance * interestRate) / 12.0;
    }

    // Override the printStatement method to include profit
    void printStatement() {
        Account::printStatement(); // Call the base class printStatement method
        cout << "Monthly Interest (Profit): $" << calculateProfit() << endl;
    }
};

int main() {
    // Create instances of different account types
    CurrentAccount current("John Doe", 1000);
    SavingsAccount savings("Alice Smith", 5000, 0.03); // 3% interest rate

    // Perform transactions
    current.deposit(500);
    current.withdraw(200);
    savings.deposit(1000);
    savings.withdraw(300);

    // Print statements for both accounts
    cout << "Current Account Statement:" << endl;
    current.printStatement();

    cout << "\nSavings Account Statement:" << endl;
    savings.printStatement();

    return 0;
}

