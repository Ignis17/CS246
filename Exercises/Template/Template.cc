// This program introduces the use of templates.
// Name: Joel Turbi
// Course: CS246
// Created: 04/10/2018

#include <iostream>

template <class T>
T fillArray(T arr[],T size,T value)
{
  for(int i = 0; i < size;i++)
  {
    if(arr[i] == value)
        return i;
  }
  return -1;
}

// max Function returns the maximum value of the following two arguments.
template <class T>
T max(T val1, T val2)
{
  if(val1 > val2)
      return val1;
  else
      return val2;
}

// Main function
int main()
{
  int array[]={2,4,5,9,12,14,16};
  int size = sizeof(array) / sizeof(array[0]);

  std::cout << "Position: " << fillArray(array,size,2) << std::endl;
  std::cout << "Position: " << fillArray(array,size,7) << std::endl;
  std::cout << "Max value: " << max(8,7) << std::endl;
}
