#include <iostream>
#include "Bank_Account.h"
using namespace std;

void Menu()
{
  Account a;
  /*double ans;
  cout << "\t**********Enter Required Details********** \n";
  cout << "Enter Account Number: \n";
  cin >> ans;
  a.SetAccountNumber(ans);
  cout << ""
  cout << a.GetAccountNumber();
  cout << "\n";*/
  int choice = 1;
  while (choice != 5 )
  {
    cout << "\nEnter 5 to exit" << "\n1. Enter Account Number: "
         << "\n2. Deposit money" << "\n3.Withdraw money"
         << "\n4.See Account Status\n";
    cin>>choice;

    switch(choice)
    {
      double ans;
      case 1:  cout << "Account #:\n";
               cin >> ans;
               a.SetAccountNumber(ans);
               break;
      case 2:  cin >> ans;
               a.Deposit(ans);
               break;
      case 3 : cin >> ans;
               a.Withdraw(ans);
               break;
      case 4:  a.Display();
               break;
      case 5 : break;
               //break;
      default: cout<<"\nMatch Not Found";
    }
  }
}

int main()
{
  Menu();
  return 0;
}
