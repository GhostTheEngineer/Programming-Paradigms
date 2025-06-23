/*
    * Object-Oriented Programming Example - Bank Account System

        This models a real bank account with behaviors like deposit, withdraw,
        and balance inquiry. OOP helps structure real systems using classes and objects.
*/

#include <iostream>

class BankAccount {
private:
    double m_Balance;

public:
    BankAccount(double initialBalance) : m_Balance(initialBalance) {}

    void deposit(double amount) {
        m_Balance += amount;
        std::cout << "Deposited $" << amount << std::endl;
    }

    void withdraw(double amount) {
        if (amount > m_Balance) {
            std::cout << "Insufficient funds!" << std::endl;
        } else {
            m_Balance -= amount;
            std::cout << "Withdrew $" << amount << std::endl;
        }
    }

    void printBalance() const {
        std::cout << "Current balance: $" << m_Balance << std::endl;
    }
};

//* Entry point
int main() {
    BankAccount account(100.0); // construct object with inital balance of 100 dollars

    account.deposit(50.0); // deposit 50 dollars
    account.withdraw(30.0); // withdraw 30 dollars
    account.printBalance();
    return 0;
}
