// This program evaluates a child's birthday gift.
//Names: Joel Turbi, Gregory Mendes
//Course: CS246
//Assignment: Exercise 1
//Due by: 02/01/2018

#include <iostream>
using namespace std;
// Declare constant max amount of gift.
const int MAXGIFT = 1000;

main()
{
  // Declaration of variables for age and money received as gift.
  int age = 12,gift = 10;

  while(gift <= MAXGIFT)
  {
    // Increment age by 1 for each passing year.
    age++;
    // Double gift for each passing year.
    gift *= 2;
    // Display output 
    cout << "Age: " << age-1 << "\n";
    cout << "Last gift: $" << gift/2 << "\n";
    cout << "Total: $" << gift << "\n\n";
}
  return 0;
}
