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
  //  pre-condition: MAXGIFT is greater or equal to 1000.
  // Post-condition: Display information to user after conditions have been validated.
  const int MAXGIFT = 1000; // Declare constant max amount of gift.
  assert(MAXGIFT >= 1000);
  // Declaration of variables for age and money received as gift.
  int age = 12,gift = 10;

  // Loop goes on until condition is met.
  while(gift <= MAXGIFT)
  {
    // Increment age by 1 for each passing year.
    age++;
    // Double gift for each passing year.
    gift *= 2;
    // Display output to terminal/user.
    cout << "Age: " << age-1 << "\n";
    cout << "Last gift: $" << gift/2 << "\n";
    cout << "Total: $" << gift << "\n\n";
  }
}

int main()
{
  // Function call (). 
  birthdayGift();
  return 0;
}
