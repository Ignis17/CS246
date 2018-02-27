// This program simulates a bank account - ATM. It asks the user for
// the account number as well as other features.
// Name: Joel Turbi
// Course: CS246
// Assignment: Bank Account
// Due: 02-27-18
#include <iostream>
#include "Bank_Account.h"
using namespace std;

void Menu() // Menu to display choices to user.
{
  Account a; // class object.
  // Header
  cout << "\t**********-Welcome to ABC Bank-**********\n";

  int choice = 1;

  while (choice != 5 )
  {
    // Pre-processor:
    // Post-processor:
    assert(choice !=5);
    cout << "\nEnter 5 to exit:\n";
    cout << "\n1. Account Number"
         << "\n2. Deposit money" << "\n3. Withdraw money"
         << "\n4. See Account Status\n";
    cin>>choice;

    switch(choice)
    {
      double ans;
      case 1:  cout << "Enter Account #:\n";
               cin >> ans;
               a.SetAccountNumber(ans);
               break;
      case 2:  cout << "Enter amount to deposit:\n";
               cin >> ans;
               a.Deposit(ans);
               break;
      case 3 : cout << "Enter amount to withdraw:\n";
               cin >> ans;
               a.Withdraw(ans);
               break;
      case 4:  a.Display();
               break;
      case 5 : break;
      default: cout<<"\nMatch Not Found";
    }
  }
}

int main()
{
  Menu(); // function call.
  return 0;
}
