// This programs provides a demonstration of Link list utilizing nodes. It first
// generates 12 random numbers between 1 and 100, sorts them and finally inserts
// it into the list.
// Author: Joel Turbi
// Course: CS246
// Assignment: Node Class / List Class
// Created: 03/29/2018

#include <cstdlib> // Provides NULL
#include <iostream>

#include "List.h" // Provides List.h members
#include "List.cc" // Provides List.cc members

using namespace std;

int main()
{
  List * test; // Pointer object list.
  test = new List;

  value_type * A; //  pointer array declared.
  A = new value_type[SIZE]; // Assigns size of dynamic array.

  test->NumberGenerator(A,SIZE); // Calls function to generate random numbers
                                 // in array between 1 and 100.
  test->Sort(A,SIZE); // Sorts numbers in array in ascending order.


  for(value_type i = 0; i < SIZE; i++)
  // Precondition: Inserts random values from 1 to 100 into list.
  {
    assert(i < SIZE); // Checks that i does not exceed the value of SIZE.
    test->AddNode(A[i]); // Inserts values into list.
  }

  // Prints / displays values in list.
  cout << "These are the numbers in this list:\n";
  test->PrintList(); // Calls print member function & displays values.
  delete [] A; // deallocates pointer array.

  return 0;
}
