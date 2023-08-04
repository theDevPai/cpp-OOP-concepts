//bank class using vector of account objects. methods to add new accounts
//withdraw and deposit money
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    Account(string accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << " to Account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " from Account " << accountNumber << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }
};

class Bank {
private:
    vector<Account> accounts;

public:
    void addAccount(string accNumber, double initialBalance) {
        Account newAccount(accNumber, initialBalance);
        accounts.push_back(newAccount);
        cout << "New account created. Account number: " << accNumber << endl;
    }

    void deposit(string accNumber, double amount) {
        for (Account& account : accounts) {
            if (account.getAccountNumber() == accNumber) {
                account.deposit(amount);
                return;
            }
        }
        cout << "Account not found." << endl;
    }

    void withdraw(string accNumber, double amount) {
        for (Account& account : accounts) {
            if (account.getAccountNumber() == accNumber) {
                account.withdraw(amount);
                return;
            }
        }
        cout << "Account not found." << endl;
    }

    double getBalance(string accNumber) const {
        for (const Account& account : accounts) {
            if (account.getAccountNumber() == accNumber) {
                return account.getBalance();
            }
        }
        cout << "Account not found." << endl;
        return 0.0;
    }
};

int main() {
    Bank myBank;

    while (true) {
        cout << "1. Add Account\n2. Deposit\n3. Withdraw\n4. Exit" << endl;
        int choice;
        cin >> choice;

        if (choice == 1) {
            string accountNumber;
            double initialBalance;
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cout << "Enter Initial Balance: ";
            cin >> initialBalance;
            myBank.addAccount(accountNumber, initialBalance);
        } else if (choice == 2) {
            string accountNumber;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            myBank.deposit(accountNumber, amount);
        } else if (choice == 3) {
            string accountNumber;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cout << "Enter Withdraw Amount: ";
            cin >> amount;
            myBank.withdraw(accountNumber, amount);
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

/*
The code defines two classes: Account and Bank. A class is like a blueprint for creating objects that share similar characteristics and behaviors.
Account Class
The Account class represents a bank account. Each account has an account number and a balance.
When we create an account, we provide an account number and an initial balance.
The deposit method allows us to add money to the account, and the withdraw method allows us to take money out of the account.
The getBalance method gives us the current balance of the account.
Vector
A vector is a dynamic array that can hold multiple elements of the same type.
In this code, we use a vector to store multiple Account objects. It allows us to keep track of multiple bank accounts in the Bank class.
We can add new accounts to the vector and perform operations on each account individually.
Bank Class
The Bank class manages a collection of accounts stored in a vector.
It has methods to add new accounts, deposit money into an account, withdraw money from an account, and get the balance of an account.
Main Function
In the main function, we create an instance of the Bank class called myBank.
The main loop repeatedly displays a menu of options to the user and takes their input.
The user can choose to:
Add a new account by providing an account number and initial balance.
Deposit money into an existing account by providing the account number and the amount to deposit.
Withdraw money from an existing account by providing the account number and the amount to withdraw.
Exit the program.
User Interaction
The program interacts with the user by displaying messages and asking for input using std::cout and std::cin.
std::cout is used to print messages to the console.
std::cin is used to get input from the user.
Function Calls
When the user chooses to add an account, deposit, or withdraw, the program calls the corresponding methods of the Bank class to perform the requested operations.
The methods in the Bank class, in turn, interact with the Account class to carry out the deposit and withdrawal operations.
*/