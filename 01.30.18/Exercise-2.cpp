// This program selects and displays the first 20 integer
// numbers that are evenly divisible by 3.
// Names: Joel Turbi, Gregory Mendes
// Course: CS246
// Assignment: Exercise 2
// Due by: 02/01/2018

#include <iostream>
using namespace std;

int main ()
{
  int total=1;

  while(total <= 20)
  {
    int number;
    cout << "Please enter an integer: \n";
    cin >> number;

    if(number%3==0)
    {

      int divisible = 0;
      divisible +=number;
      cout << "\n" << divisible << " is divisible by 3.\n\n";
      total++;
    }
  }

  return 0;
}
