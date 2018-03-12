// This program has two 2D arrays of the same dimensions,
// adds the elements by row and column and stores them in
// a third 2D array of the same dimensions.
//Names: Joel Turbi
//Course: CS246
//Assignment: Matrix Addition
//Due by: 02/11/2018

#include <iostream>
using namespace std;

void MatrixAddition()
{
	int matrix[2][3] = {{2,15,7}, {3,4,9}};	// First 2D array.
  int matrix2[2][3] = {{1,5,12}, {7,8,2}};	// Second 2D array.
  int matrix3[2][3];	// Empty third array.

	// Initialize addition of rows and colums into third empty 2D array.
  for(int row = 0; row < 2; row++)
	{
    for(int col = 0; col < 3; col++)
    {
      matrix3[row][col] = matrix[row][col] + matrix2[row][col]; // Add 2-D array
																																// to empty 2-D array.
    }
	}

	// Display third array to user.
  for(int row = 0; row < 2; row++)
	{
    for(int col = 0; col < 3; col++)
    {
      	cout << matrix3[row][col] << "|";
    }
		if(row == 0){cout << "\n---------\n";}  // Separating line.
	}
}

int main()
{
	MatrixAddition(); // Function call. 
	return 0;
}
