// This program performs a Union of two sets, A and B, that consists of all
// elements in A or B. As well as an intersection of two sets, A and , that
// consists of elements in both A and B.
// Names: Joel Turbi
// Course: CS246
// Assignment: Sets
// Due by: 03/08/2018
#include <cstdlib>
#include <algorithm>    // std::set_union,std::set_intersection, std::sort
#include <vector>     // std::vector
#include <iostream>
#include <cassert>      // used for assert
#define  NDEBUG
using namespace std;

// This function assigns generates random number from 1 to 100 to array.
void FillArray(int arr[], int size)
{
  for (int i=0;i < size;i++)
  {
    //  Pre-condition: Chescks that size is equal to assigned value.
    //  Post-condition: If condition is true, it will execute the following
    // statements. Otherwise it will display error message.
    assert(i < size);
    bool check; //  bool variable to check or number is already used
    int n; // variable to store the number
    do
    {
      n = rand()%100 + 1;
      //check or number is already used:
      check = true;
      for (int j=0;j<i;j++)
      {
        if (n == arr[j]) // if number is already used
        {
          check=false; // set check to false
          break; // no need to check the other elements of arr[]
        }
      }
    }while(!check); // loop until new, unique number is found
    arr[i]=n; // store the generated number in the array
  }
}

// This function performs the Union between sets A and B.
void Union(int arr1[],int arr2[])
{
  vector<int> v(20); // Initialized vector arrays
  vector<int>::iterator it;

  sort(arr1,arr1+15); // sort first array
  sort(arr2,arr2+20); // sort second array

  // calls function set_union and assigns it to vector array.
  it = set_union(arr1,arr1+15,arr2,arr2+20,v.begin());

  // Displays results of union set.
  cout << "The union has " << (v.size()) << " elements:\n";
  for(it=v.begin(); it != v.end(); ++it)
  {
    cout << ' ' << *it;
    cout << '\n';
  }
}

// This function performs the Intersection between sets A and B.
void Intersection(int arr1[],int arr2[])
{
  vector<int> v(20); // Initialized vector arrays
  vector<int>::iterator it;

  sort(arr1,arr1+15); // sort first array
  sort(arr2,arr2+20); // sort second array

  // calls function set_intersection and assigns it to vector array.
  it = set_intersection (arr1,arr1+15,arr2,arr2+20,v.begin());
  v.resize(it-v.begin());

  // Displays  results of intersection set.
  cout << "\nThe intersection has " << (v.size()) << " elements:\n";
  for (it=v.begin(); it!=v.end(); ++it)
  {
    cout << ' ' << *it;
    cout << '\n';
  }
}

int main()
{
  int A[15],B[20]; // Declaration and initialization of int arrays A, B and C.
  FillArray(A,15); // Calls function to pass randomized numbers to array A.
  FillArray(B,20);  // Calls function to pass randomized numbers to array B.
  Union(A,B); // Calls function for Union between sets A and B.
  Intersection(A,B); // Calls function for Intersection between sets A and B.

  return 0;
}
