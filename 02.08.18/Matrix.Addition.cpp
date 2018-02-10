// This program
//Names: Joel Turbi
//Course: CS246
//Assignment: Exercise 1
//Due by: 02/01/2018

#include <iostream>
using namespace std;

int main()
{
	int matrix[2][3] ={{2,15,7}, {3,4,9}};
  int matrix2[2][3] = {{1,5,12},{7,8,2}};
  int matrix3[2][3];
	int one=0;

  for(int row = 0; row < 2; row++)
	{
    for(int col = 0; col < 3; col++)
    {
      matrix3[row][col] = matrix[row][col] + matrix2[row][col];
    }
	}
  for(int row = 0; row < 2; row++)
	{
    for(int col = 0; col < 3; col++)
    {
      cout << matrix3[row][col] << "|";
    }

		cout << "\n";
		while(one < 1){cout << "_________\n";one++;}
	}
	return 0;
}
