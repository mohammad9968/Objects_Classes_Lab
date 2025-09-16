#include <iostream>
#include <vector>
#include <limits>
#include "BankAccount.h"

using namespace std;

int main() {
    vector<BankAccount> accounts;
    int choice;

    do {
        cout << "\n--- Bank Account Menu ---\n";
        cout << "1. Create new account\n";
        cout << "2. View all accounts\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string num, name;
            double bal;

            cout << "Enter account number: ";
            cin >> num;

            // clear leftover newline so getline works
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "Enter account holder name: ";
            getline(cin, name);   // allows spaces in the name

            cout << "Enter starting balance: ";
            cin >> bal;

            accounts.emplace_back(num, name, bal);
            cout << "Account created.\n";
        }
        else if (choice == 2) {
            if (accounts.empty()) {
                cout << "No accounts yet.\n";
            } else {
                for (const auto& acc : accounts) {
                    cout << "Account number: " << acc.getAccountNumber()
                         << " | " << acc.getAccountHolderName()
                         << " | Balance: $" << acc.getBalance() << "\n";
                }
            }
        }
        else if (choice == 3) {
            string num;
            double amt;
            bool found = false;

            cout << "Enter account number: ";
            cin >> num;
            cout << "Enter deposit amount: ";
            cin >> amt;

            if (amt <= 0) {
                cout << "Invalid deposit amount.\n";
            } else {
                for (auto& acc : accounts) {
                    if (acc.getAccountNumber() == num) {
                        acc.deposit(amt);
                        cout << "Deposit complete.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found.\n";
            }
        }
        else if (choice == 4) {
            string num;
            double amt;
            bool found = false;

            cout << "Enter account number: ";
            cin >> num;
            cout << "Enter withdrawal amount: ";
            cin >> amt;

            if (amt <= 0) {
                cout << "Invalid withdrawal amount.\n";
            } else {
                for (auto& acc : accounts) {
                    if (acc.getAccountNumber() == num) {
                        acc.withdraw(amt);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found.\n";
            }
        }

    } while (choice != 5);

    cout << "Goodbye!\n";
    return 0;
}
