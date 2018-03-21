// This program simulates a bank account - ATM. It asks the user for
// the account number as well as other features.
// Name: Joel Turbi
// Course: CS246
// Assignment: Bank Account
// Due: 02-27-18
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <iostream>
#include <cassert> // Needed for the assert function.
#define NDEBUG
#include <ctime> // Needed for the true randomization
#include <cstdlib>
#include <iomanip>


class Account
{
public:
  Account() // Default constructor
  {
     int x;
     srand(time(0)); // This will ensure a really randomized number by help of time.
     x = rand()%900000000+100000000; // Randomizes an account number between 100000000 to 900000000. Note: Most bank account have 9 digits.
    num = x; // Initializes account number to 0(Zero).
    Balance = 0.0; // Initializes account balance to 0(Zero).
  }
  ~Account(){} // Destructor.
  void Withdraw(double amount) // Member function to withdraw money from account.
  {
    if (amount > 0)
    {
      // Pre-processor: Ensures that the value entered by user is greater than 0(zero).
      // Post-processor: If it is greater than 0 it will execute, else it will display an error message.
      assert(amount > 0);
      if (Balance < 0)
      {
        // Pre-processor: Checks to see that the value of balance is less than 0(zero).
        // Post-processor: If it is less than 0 it will execute and perform statements, else it will display an error message.
        assert(Balance < 0);
        Balance -= amount*InterestRate;
      }
      else if ((Balance-amount) < 0)
      {
        // Pre-processor: Checks if the difference between balance and the value entered by the user is less than 0(zero).
        // Post-processor: If it is true it will execute and perform calculations, else it will display an error message.
        assert((Balance-amount) < 0);
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
      // Pre-processor: Ensures that the value entered by the user is greater than 0(zero).
      // Post-processor: If it is true it will execute and perform calculations, else it will display an error message.
      assert(amount > 0);
      Balance += amount;
    }
    else
    {
      std::cout << "Incorrect money amount!" << std::endl;
    }
  }
  double GetBalance() // Returns account's balance.
  {
    return Balance;
  }
  int GetAccountNumber() // Returns account's number.
  {
      return num;
  }
  void Display() // Menu that displays account details.
  {
    std::cout<<"\t**********Display Account Details**********";
    std::cout<<"\n\t\tAccount Number: " << GetAccountNumber();
    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout<<"\n\t\tAvailable Balance: " << "$" << GetBalance() << std::endl << std::endl;
    std::cout <<"\t*********************************************";
  }
private:
  double Balance; // Private declaration of balance variable.
  double InterestRate = 1.25; // static constant initilization of
                                           // Interest rate.
  int num; // Private declaration for account number.
};

#endif // BANK_ACCOUNT_H
