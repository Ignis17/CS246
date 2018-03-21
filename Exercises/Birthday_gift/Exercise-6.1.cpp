// This program evaluates a child's birthday gift.
// Names: Joel Turbi, Gregory Mendes
// Course: CS246
// Assignment: Exercise 6.2
// Due by: 02/06/2018

#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 6;
  int array[SIZE] = {14,13,12,11,10,9};
  int sum=0;

  for(int i=0; i < SIZE; i++)
  {
    if(array[i]%2==0)
    {
      sum += array[i];
    }

  }
  cout << "The sum of the even numbers is: " << sum << "\n";

  return 0;
}
