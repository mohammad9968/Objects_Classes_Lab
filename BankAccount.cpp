#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount() : accountNumber(""), accountHolderName(""), balance(0.0) {}

BankAccount::BankAccount(const std::string& accNum, const std::string& holder, double bal)
    : accountNumber(accNum), accountHolderName(holder), balance(bal) {}

std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}

std::string BankAccount::getAccountHolderName() const {
    return accountHolderName;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setAccountHolderName(const std::string& newName) {
    accountHolderName = newName;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    } else {
        std::cout << "Invalid deposit amount.\n";
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds or invalid amount.\n";
    }
}
