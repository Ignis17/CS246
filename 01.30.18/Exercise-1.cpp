// This program evaluates a child's birthday gift.
// Name: Joel Turbi
// Course: CS246
// Assignment: Exercise 1
// Due by: 02/01/2018

#include <iostream>
#include <cassert> // Used for assert member function.
using namespace std;

void birthdayGift()
{
  // Pre-condition: gift is greater or equal to MAXGIFT.
  // Post-condition: Display information to user after conditions have been validated.
  const int MAXGIFT = 1000; // Declare constant max amount of gift.
  // Declaration of variables for age and money received as gift.
  int age = 12,gift = 10, sum = gift;

  // Loop goes on until condition is met.
  while(gift <= MAXGIFT)
  {
    assert(gift <= MAXGIFT); //
    // Display output to terminal/user.
    cout << "Age: " << age << "\n";
    cout << "Money: $" << gift << "\n";
    cout << "Total: $" << sum << "\n\n";
    // Double gift for each passing year.
    gift *= 2;
    sum += gift;
    // Increment age by 1 for each passing year.
    age++;
  }
}

int main()
{
  // Function call ().
  birthdayGift();
  return 0;
}
