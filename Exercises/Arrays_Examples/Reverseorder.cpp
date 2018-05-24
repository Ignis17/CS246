// Author:
// Description:

#include <iostream>
#include <cassert>

int main()
{
  int size=10; // Size of the array.
  int num[size]; // Array declaration.
  int i;

  // Assignment of array values.
  for(i=0;i<size; i++)
  {
    assert(i<size);
    num[i] = i+1;
  }

  // Display array values to user.
  std::cout << "Display in reverse order: \n";
  for(i=0;i < size; i++)
  {
    std::cout << num[9-i] << " ";
  }
  return 0;
}
