// This program
//Names: Joel Turbi
//Course: CS246
//Assignment: Bitcoin
//Due by: 02/11/2018

#include <iostream>
#include <cmath>
using namespace std;

void Bitcoin()
{
  double matrix[2][6] = {4780,4318,6253,10357,13672,9641};
  double bitcoin[2][6];
  for(int row = 0; row < 2; row++)
  {
    for(int col = 0; col < 6; col++)
    {

     matrix[row+1][col+1] = (abs(matrix[row][col+1]-matrix[row][col]))/100;
     bitcoin[row][col] = matrix[row][col];
     cout << "Prices: \n";
     cout << bitcoin[row][col] << "\n";
    }
  //  cout << endl;
  }

  for(int i =0; i < 2; i++)
  {
    for(int j = 0; j < 6; j++)
    {
    //  cout << matrix[i][j] << "\n";
    }
  }

}


int main()
{
  Bitcoin();
  return 0;
}
