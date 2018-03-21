// This program calculates the average test score of all students’ test scores.
//Names: Joel Turbi
//Course: CS246
//Assignment: 2-D average Overall
//Due by: 02/01/2018

#include <iostream>
using namespace std;

int main()
{

	int x; // temp variable to assign to sum
	double cal; // Calculates the average
	int grades[5][3] =				// grades initialization
				{ { 78, 83, 82 },
          { 90, 88, 94 },
          { 71, 73, 78 },
          { 97, 96, 95 },
          { 89, 93, 90 } };

	for(int row = 0; row < 5; row++)
	{
		int sum = 0; //  Variable to store sum

		for(int col = 0; col < 3; col++)
		{
			x = grades[row][col];	// stores the value of grades at each iteration
			sum += x;	// adds the sum of 3 test grades
		}
		cal = sum / 3; // Calculates the average of each student by the # of tests

		cout << "The average for student " << row+1 << " is " << cal << endl;
	}
	return 0;
}
