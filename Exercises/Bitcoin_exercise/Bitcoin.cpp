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
  double matrix[2][6] = {{4780,4318,6253,10357,13672,9641},{}};

  cout << " Price & percentage incline and decline of Bitcoin in the last 6 months:\n";

  for(int i = 0; i < 1; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      double percentage = 0;
      percentage = ((matrix[i][j+1])-(matrix[i][j]))/100;
      matrix[i+1][j+1] += percentage;
    }
  }

  // Display
  for( int row = 0; row < 2; row++)
  {
    for(int col = 0; col < 6; col++)
    {
      cout << "\n\t" << col+1 << " Month: " << matrix[row][col];
    }
    cout << "\n";
  }
}


int main()
{
  Bitcoin();
  return 0;
}
