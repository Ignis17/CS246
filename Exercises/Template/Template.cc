// This program introduces the use of templates.
// Name: Joel Turbi
// Course: CS246
// Created: 04/10/2018

#include <iostream>

template <class T>
int fillArray(T arr[], int size,T value)
{
  for(int i = 0; i < size;i++)
  {
    if(arr[i] == value)
    {
      return i;
    }
  }
  return -1;
}

template <class T>
int max(T val1, T val2)
{
  if(val1 > val2)
  {
    return val1;
  }
  return val2;
}

int main()
{
  int array[10]={2,4,5,9,12,14,16,0,0,0};
  int num = 4;

  std::cout << "Position: " << fillArray(array,7,12) << std::endl;
  std::cout << "Position: " << fillArray(array,7,1) << std::endl;
  std::cout << "Max value: " << max(6,3) << std::endl;
}
