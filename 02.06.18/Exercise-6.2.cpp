// This program evaluates a child's birthday gift.
// Names: Joel Turbi, Gregory Mendes
// Course: CS246
// Assignment: Exercise 6.2
// Due by: 02/06/2018

#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 4;
  int array[SIZE] = {14,13,12,11};
  int min= array[0];

  for(int i=1; i < SIZE;i++)
  {

    if(array[i] < min)
    {
      min = array[i];
    }
  }
    cout << min << "\n";
  return 0;
}
