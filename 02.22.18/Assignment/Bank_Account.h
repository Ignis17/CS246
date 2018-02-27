// This program simulates a bank account - ATM. It asks the user for
// the account number as well as other features.
// Name: Joel Turbi
// Course: CS246
// Assignment: Bank Account
// Due: 02-27-18
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string> // Needed for strings.
#include <iostream>
#include <cassert> // Needed for the assert function.

class Account
{
public:
  Account() // Default constructor
  {
    num = 0; // Initializes account number to 0(Zero).
    Balance = 0.0; // Initializes account balance to 0(Zero).
  }
  ~Account(){} // Destructor.
  void Withdraw(double amount) // Member function to withdraw money from account.
  {
    if (amount > 0)
    {
      // Pre-processor:
      // Post-processor:
      assert(amount > 0);
      if (Balance < 0)
      {
        // Pre-processor:
        // Post-processor:
        assert(Balance < 0);
        Balance -= amount*InterestRate;
      }
      else if (Balance-amount < 0)
      {
        // Pre-processor:
        // Post-processor:
        assert(Balance-amount < 0);
        Balance = -(amount-Balance)*InterestRate;
      }
      else
      {
        Balance -= amount;
      }
    }
    else
    {
      std::cout << "Incorrect withdraw amount! " << std::endl;
    }
  }
  void Deposit(double amount) // Deposit member function.
  {
    if (amount > 0)
    {
      // Pre-processor:
      // Post-processor:
      assert(amount >0);
      Balance += amount;
    }
    else
    {
      std::cout << "Incorrect money amount!" << std::endl;
    }
  }
  double SetAccountNumber(double n) // Account number setter member function.
  {
    num = n;
  }
  double GetBalance() // Returns account's balance.
  {
    return Balance;
  }
  double GetAccountNumber() // Returns account's number.
  {
      return num;
  }
  void Display() // Menu that displays account details.
  {
    std::cout<<"\t**********Display Account Details**********";
    std::cout<<"\nAccount Number is:- " << GetAccountNumber();
    std::cout<<"\nBalance is: " << "$" << GetBalance() << std::endl << std::endl;
  }
private:
  double Balance; // Private declaration of balance variable.
  static const double InterestRate = 1.25; // static constant initilization of
                                           // Interest rate.
  double num; // Private declaration for account number. 
};

#endif // BANK_ACCOUNT_H
