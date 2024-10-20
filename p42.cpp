// ues 1. You are tasked with creating a simple banking application that allows users to withdraw money from their accounts. If a user attempts to withdraw an amount greater than their balance, throw an InsufficientFundsException. Similarly, if a negative amount is entered for withdrawal, throw an InvalidAmountException.

// Write a program that:

// Defines two custom exceptions: InsufficientFundsException and InvalidAmountException.
// Implements a BankAccount class with:
// A constructor to initialize the balance.
// A method withdraw(double amount) that throws the appropriate exceptions when invalid withdrawals are attempted.
// In the main function, create an instance of BankAccount and handle the exceptions with try-catch blocks.
// Constraints:

// The balance cannot be negative.
// If a valid withdrawal occurs, deduct the amount from the balance.Sample Input:Balance: 1000
// Withdrawal: 1200 Sample Output:Error: Insufficient funds for this withdrawal.


#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFunds : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient funds.";
    }
};

class InvalidAmount : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Invalid amount.";
    }
};

class Bank {
private:
    double bal;

public:
    Bank(double b) {
        if (b < 0) throw InvalidAmount();
        bal = b;
    }

    void wd(double amt) {
        if (amt <= 0) throw InvalidAmount();
        if (amt > bal) throw InsufficientFunds();
        bal -= amt;
        cout << "Withdrawal successful. Balance: " << bal << endl;
    }
};

int main() {
    Bank acc(1000);

    try {
        acc.wd(1200);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
