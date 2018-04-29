// C++ implementation of Binary Search.
// Name: Joel Turbi
// Course: CS246
// Created: 04/2
#include <iostream>

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int left, int right, int x)
{
  while(left <= right)
  {
    int middle = left + (right - left)/2;

    // Check if c is present at the middle.
    if(arr[middle] == x)
        return middle;
    // If x is greater, ignore left half.
    else if(arr[middle] < x)
        left = middle + 1;
    // If x is smaller, ignore the right half.
    else
        right = middle - 1;
  }
  // If we reach here, then element was not present.
  return -1;
}

// Main function
int main()
{
  int arr[]={2,3,4,10,40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 3;
  int result = binarySearch(arr,0,n,x);

  if(result == -1)
      std::cout << "Element is not present in array.\n";
  else
      std::cout << "Element is present at index " << result << std::endl;

  return 0;
}
