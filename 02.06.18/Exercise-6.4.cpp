// This program 
// Names: Joel Turbi, Gregory Mendes
// Course: CS246
// Assignment: Exercise 6.4
// Due by: 02/06/2018

#include <iostream>
using namespace std;

int main()
{
  const int rotation = 3;
  const int SIZE = 6;
  int array[SIZE] = {14,13,12,11,10,9};
  int temp;

  for(int i = 0; i < rotation; i++)
  {
      temp = array[i+rotation];
      array[i+rotation] = array[i];
      array[i] = temp;
  }
for (int x =0; x < SIZE; x++)
{
  cout << array[x] << endl;
}

  return 0;
}
