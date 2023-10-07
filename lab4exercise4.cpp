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

// Base class: Account
class Account {
protected:
    string accountHolder;
    double balance;
    int numWithdrawals;
    int numDeposits;

public:
    Account(string holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance), numWithdrawals(0), numDeposits(0) {}

    // Utility method to make a deposit
    void deposit(double amount) {
        balance += amount;
        numDeposits++;
    }

    // Utility method to make a withdrawal
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            numWithdrawals++;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Utility method to print the account statement
    void printStatement() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Number of Withdrawals: " << numWithdrawals << endl;
        cout << "Number of Deposits: " << numDeposits << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Derived class: CurrentAccount
class CurrentAccount : public Account {
public:
    CurrentAccount(string holder, double initialBalance)
        : Account(holder, initialBalance) {}

    // Override the withdraw method to allow overdrafts
    void withdraw(double amount) {
        //Implementation Here
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(string holder, double initialBalance, double rate)
        : Account(holder, initialBalance), interestRate(rate) {}

    // Calculate profit on balance per month based on interest rate according to the equation Profit = (balance * interestRate) / 12.0;
    double calculateProfit() {
       //Implement the profit calculation
    }

    // Override the printStatement method to include profit
    void printStatement() {
        //Call the Account::printStatement() original function to print the normal values of the account;
        // Print the calculated profit 
        // cout << "Monthly Interest (Profit): $" << /*call the calculateProfit function*/ << endl;
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
