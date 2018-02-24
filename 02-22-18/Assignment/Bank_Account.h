// Name: Joel Turbi
//
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <iostream>

class Account
{
public:
  Account()
  {
    num = 0;
    Balance = 0.0;
  }
  ~Account(){}
  void Withdraw(double amount)
  {
    if (amount > 0)
    {
      if (Balance < 0)
      {
        Balance -= amount*InterestRate;
      }
      else if (Balance-amount < 0)
      {
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
  void Deposit(double amount)
  {
    if (amount > 0)
    {
      Balance += amount;
    }
    else
    {
      std::cout << "Incorrect money amount!" << std::endl;
    }
  }
  double SetAccountNumber(double n)
  {
    num = n;
  }
  double GetBalance()
  {
    return Balance;
  }
  double GetAccountNumber()
  {
      return num;
  }
  void Display()
  {
    std::cout<<"\t**********Display Account Details**********";
    std::cout<<"\nAccount Number is: " << GetAccountNumber();
    std::cout<<"\nBalance is: " << GetBalance() << std::endl;
  }
private:
  double Balance;
  static const double InterestRate = 1.25;
  double num;
};

#endif // ACCOUNT_H
