// This program read an integer, count the number of digits
// in the integer and displaying the count at the end of the program.
// Names: Joel Turbi, Gregory Mendes
// Course: CS246
// Assignment: Exercise 2
// Due by: 02/01/2018

#include <iostream>
using namespace std;

int main ()
{
  int input, counter=1;

  cout << "Please enter an integer: ";
  cin >> input;

  while(input > 10)
  {
    input /= 10;
    counter++;
  }
  cout << "Number of digits: " << counter << endl;

  return 0;
}
