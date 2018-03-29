#include <cstdlib> // Provides NULL
#include <iostream>

#include "List.h"
#include "List.cc"

using namespace std;

int main()
{
  List test;


  test.AddNode(3);
  test.AddNode(5);
  test.AddNode(4);
  cout << "These are the numbers in this list:\n";
  test.PrintList();

  test.DeleteNode(5);
  cout << "\nThese are now the numbers in this list:\n";
  test.PrintList();

  return 0;
}
