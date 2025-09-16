# BankAccount Class

A C++ class for simulating basic bank account operations.

## Data Dictionary

| Attribute          | Data Type      | Description                    |
|--------------------|---------------|--------------------------------|
| accountNumber       | std::string   | The account number.            |
| accountHolderName   | std::string   | The name of the account holder.|
| balance              | double        | The current balance.            |

## Methods List

| Method Signature                                       | Return Type     | Description                        |
|---------------------------------------------------------|----------------|------------------------------------|
| BankAccount()                                           | (Constructor)  | Default constructor.               |
| BankAccount(accountNumber, accountHolderName, balance)  | (Constructor)  | Parameterized constructor.         |
| getAccountNumber() const                                | std::string    | Gets the account number.           |
| getAccountHolderName() const                            | std::string    | Gets the account holder’s name.    |
| getBalance() const                                      | double         | Gets the current balance.           |
| setAccountHolderName(newName)                           | void            | Sets the account holder’s name.     |
| deposit(amount)                                         | void            | Adds amount to balance.             |
| withdraw(amount)                                        | void            | Deducts amount if funds are sufficient. |
