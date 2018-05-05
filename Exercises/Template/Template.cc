// This program introduces the use of templates.
// Name: Joel Turbi
// Course: CS246
// Created: 04/10/2018

#include <iostream>

// fillArray function fills array and checks if value is in the array.
template <class T>
T fillArray(T arr[],T size,T value)
{
  for(int i = 0; i < size;i++)
  {
    // Checks to see if element in array is equivelant to value. If it is it
    // returns the index of where that element is stored.
    if(arr[i] == value)
        return i;
  }
  // If element is not in the array it returns -1.
  return -1;
}

// max function returns the maximum value of the following two arguments.
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
