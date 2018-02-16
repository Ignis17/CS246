// This program calculate the product of two numbers without using the
// * operator This problem requires repeated addition, e.g. 7*3 = 7+7+7,
// So X*Y can be computed by adding X to itself Y times.
// Names: Joel Turbi
// Course: CS246
// Assignment: Exercise 3
// Due by: 02/01/2018

#include <iostream>
using namespace std;

int main()
{
  int x, y; // declaration of variables, x- multiplicand and y- multiplier.
  int z=0;  // temp variable

  // Prompt user to enter values for X and Y.
  cout << "please enter a multiplicand followed by multiplier: ";
  cin >> x >> y;

  // Loop condition
  while(y>0)
  {
    z +=x;
    y--;
  }
  cout << "The result is: " << z << "\n";
  return 0;
}
