#include <cstdlib> // Provides NULL
#include <iostream>

#include "List.h"
#include "List.cc"

using namespace std;

int main()
{
  List test;

  value_type A[SIZE];
  test.FillArray(A,SIZE);
  test.Sort(A,SIZE);


  for(value_type i = 0; i < SIZE; i++)
  // Precondition: Inserts random values from 1 to 100 into list.
  {
    test.AddNode(A[i]);
  }

  // Prints / displays values in list.
  cout << "These are the numbers in this list:\n";
  test.PrintList();

  return 0;
}
