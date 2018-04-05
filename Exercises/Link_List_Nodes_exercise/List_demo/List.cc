// This programs provides a demonstration of Link list utilizing nodes. It first
// generates 12 random numbers between 1 and 100, sorts them and finally inserts
// it into the list.
// Author: Joel Turbi
// Course: CS246
// Assignment: Node Class / List Class
// Created: 03/29/2018

#include "List.h" // Provides List.h members.

int main()
{
  List *test = new List; // Pointer object List.

  value_type *a = new value_type[SIZE]; //  Pointer array declared.
                                       // Assigns size of dynamic array.
  test->NumberGenerator(a); // Calls function to generate random numbers
                            // in array between 1 and 100.
  test->Sort(a); // Sorts numbers in array in ascending order.

  for(value_type i = 0; i < SIZE; i++)
  // Precondition: Inserts random values from 1 to 100 into list.
  {
    assert(i < SIZE); // Checks that i does not exceed the value of SIZE.
    test->AddNode(a[i]); // Inserts values into list.
  }

  // Prints / displays values in list.
  std::cout << "These are the numbers in this list:\n";
  test->PrintList(); // Calls print member function & displays values.

  delete [] test, a; // deallocates pointer array.
  a = nullptr; // Pointer is no longer referencing anything.
  test = nullptr;

  return 0;
}
