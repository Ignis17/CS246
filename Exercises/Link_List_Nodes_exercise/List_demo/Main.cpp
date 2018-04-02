// Author: Joel Turbi
// Course: CS246
// Created: 03/29/2018

#include <cstdlib> // Provides NULL
#include <iostream>

#include "List.h"
#include "List.cc"

using namespace std;

int main()
{
  List test; // List object.

  value_type A[SIZE]; // int array declared.
  test.FillArray(A,SIZE); // Calls function to generate random numbers in array
                          // between 1 and 100.
  test.Sort(A,SIZE); // Sorts numbers in array in ascending order.


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
