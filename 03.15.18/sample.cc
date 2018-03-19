// Sort a list of numbers entered at the keyboard
#include <iostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

typedef int* IntArrayPtr;

void fill_array(int a[], int size);
// Precondition: size is the size of the array a.
// Postcondition: a[0] through a[size-1] have been
// filled with values read from the keyboard.
void sort(int a[],int size);
// Precondition: size is the size of the array a.
// The array elements a[0] through a[size-1] have values.
// Postcondition: The values of a[0] through a[size-1] have been rearranged
// so that a[0] <= a[1] ... <= a[size-1].

int main()
{
	cout << "This program sorts numbers the lowest to highest. \n";

	int array_size;
	cout << "How many numbers will be sorted? ";
	cin >> array_size;

	IntArrayPtr a;
	a = new int[array_size];

	fill_array(a, array_size);
	sort(a,array_size);

	cout << "In sorted order the numbers are: \n";
	for(int index = 0; index < array_size; index++)
	{
		cout << a[index] << " ";
	}
		cout << endl;
		delete [] a;
	  return 0;

}

void swap(int &a, int &b)
{
		int temp;
		temp = a;
		a = b;
		b = temp;
}
	// Uses the library iostream:
void fill_array(int a[], int size)
{
	cout << "Enter " << size << " intergers. \n";
	for(int index = 0; index < size; index++)
	{
		cin >> a[index];
	}
}
void sort(int a[], int size)
{
	for(int index = 0; index < size; index++)
		for(int index2 = 0; index2 < size-index-1;index2++)
		{
			if(a[index2] > a[index2+1])
			{
				swap(a[index2],a[index2+1]);
			}
		}
}
