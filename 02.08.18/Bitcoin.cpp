// This program
//Names: Joel Turbi
//Course: CS246
//Assignment: Bitcoin
//Due by: 02/11/2018

#include <iostream>
using namespace std;

void Bitcoin()
{
  double total, diff;
  int temp = 0;
  double percent;
  double bitPrice[6][6] = {4780,4318,6253,10357,13672,9641};

  for(int row = 0; row < 2; row++)
  {


    for(int col = 0; col < 6; col++)
    {
      total = (bitPrice[row+1][col]+bitPrice[row+2][col]);
      diff = ((bitPrice[row+1][col])-(bitPrice[row+2][col]));
      percent = (diff/total) * 100;
      temp += percent;
      bitPrice[row][temp];
      cout << total <<endl;

    }
  }

 for(int i=0; i < 2; i++)
  {
    for(int j=0; j < 6; j++)
    {
      cout << bitPrice[i][j] << endl;
    }
  }
}


int main()
{
  Bitcoin();
  return 0;
}
