#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(); // default constructor
    BankAccount(const std::string& accNum, const std::string& holder, double bal); // parameterized constructor

    // getters
    std::string getAccountNumber() const;
    std::string getAccountHolderName() const;
    double getBalance() const;

    // setter
    void setAccountHolderName(const std::string& newName);

    // member functions
    void deposit(double amount);
    void withdraw(double amount);
};

#endif
