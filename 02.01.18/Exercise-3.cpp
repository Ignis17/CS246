// This program calculate the product of two numbers without using the
// * operator This problem requires repeated addition, e.g. 7*3 = 7+7+7,
// So X*Y can be computed by adding X to itself Y times.
// Names: Joel Turbi
// Course: CS246
// Assignment: Exercise 3
// Due by: 02/16/2018

#define NDEBUG
#include <iostream>
#include <cassert>
using namespace std;

int Multiplier()
{
  int x, y; // declaration of variables, x- multiplicand and y- multiplier.
  int z = 0;  // temp variable

  // Prompt user to enter values for X and Y.
  cout << "Please enter a multiplicand followed by multiplier: \n";
  cin >> x >> y;  // Gets inputs from user/keyboard.

  // Loop condition: performs calculations.
  while(y>0)
  {
    // Pre-condition: Checks if y is greater than zero;
    // Post-condition: Once condition is met, it adds the value of X
    // to temp variable named Z.
    assert(y>0); // Assert condition
    z +=x;  // adds value of X to Z.
    y--;  // Subtracts one from Y.
  }
  cout << "The result is: " << z << "\n"; // Displays end result to user.
}

int main()
{
  Multiplier(); // Function call.
  return 0;
}
