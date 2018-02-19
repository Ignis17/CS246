// This program read an integer, count the number of digits
// in the integer and displaying the count at the end of the program.
// Names: Joel Turbi
// Course: CS246
// Assignment: Exercise 4
// Due by: 02/16/2018

#define NDEBUG
#include <iostream>
#include <cassert> // Needed for assert function
using namespace std;

int Digits()
{
  // Declaration of input variable and initialization of counter variable.
  int input,
      counter=1;
  // Prompts user to enter an integer.
  cout << "Please enter an integer: \n";
  cin >> input; // Gets integer value from user.

  while(input > 10)
  {
    // Pre-condition: Checks to see that input is less than 10.
    // Post-condition: Once condition is met input is divided by 10
    // and counter gets incremented.
    assert(); // Assert condition.
    input /= 10; // integer value gets divided by 10, in order to get the
                // the number of digits.
    cout << input << endl;
    counter++; // Reads the number of digits encounter by the input from user.
  }

  //Displays end result to screen/user.
  cout << "Number of digits: " << counter << endl;
}

int main()
{
  // Function call.
  Digits();
  return 0;
}
