// This program performs a Union of two sets, A and B, that consists of all
// elements in A or B. As well as an intersection of two sets, A and , that
// consists of elements in both A and B.
// Names: Joel Turbi
// Course: CS246
// Assignment: Sets
// Due by: 03/08/2018
#include <cstdlib>
#include <ctime>        // Used to generated a random number
#include <algorithm>    // std::set_union, std::sort
#include <vector>       // std::vector
#include <iostream>
#include <cassert>      // used for assert
//#define  NDEBUG
using namespace std;

// This function assigns generates random number from 1 to 100 to array.
void FillArray(int arr[], int size)
{
  srand(time(NULL));
  for (int i=0;i < size;i++)
{   //  Pre-condition: Chescks that size is equal to assigned value.
    //  Post-condition: If size is correct it will execute the following statements,
    //  otherwise it will display error message.
    assert(i < size);
    bool check; //variable to check or number is already used
    int n; // variable to store the number in
    do
    {
    n=rand()%100 + 1;
    //check or number is already used:
    check=true;
    for (int j=0;j<i;j++)
        if (n == arr[j]) //if number is already used
        {
            check=false; //set check to false
            break; //no need to check the other elements of value[]
        }
    } while (!check); //loop until new, unique number is found
    arr[i]=n; //store the generated number in the array
}
}
void Union(int arr1[],int arr2[])
{
  vector<int> v(20);
  vector<int>::iterator it;
  sort(arr1,arr1+15);
  sort(arr2,arr2+20);
  it=set_union(arr1,arr1+15,arr2,arr2+20,v.begin());
  v.resize(it-v.begin());

  cout << "The union has " << (v.size()) << " elements:\n";
  for(it=v.begin(); it!=v.end(); ++it)
  {
    cout << ' ' << *it;
    cout << '\n';
  }
}

void Intersection(int arr1[],int arr2[])
{
  vector<int> v(20);
  vector<int>::iterator it;

  sort(arr1,arr1+15);
  sort(arr2,arr2+20);

  it=std::set_intersection (arr1,arr1+15,arr2,arr2+20,v.begin());
  v.resize(it-v.begin());

  cout << "\n\nThe intersection has " << (v.size()) << " elements:\n";
  for (it=v.begin(); it!=v.end(); ++it)
  {
    cout << ' ' << *it;
    cout << '\n';
  }
}

int main()
{
  int A[15],B[20],C[20];
  FillArray(A,15);
  FillArray(B,20);
  Union(A,B);
  Intersection(A,B);

  return 0;
}
