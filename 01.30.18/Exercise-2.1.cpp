// This program selects and displays the first 20 integer
// numbers that are evenly divisible by 3.
// Names: Joel Turbi, Gregory Mendes
// Course: CS246
// Assignment: Exercise 2
// Due by: 02/01/2018

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  int total=1;
  string line;
  ofstream out;
  out.open("numbers.txt");

  while(total <= 20)
  {
    int number;

    cout << "Please enter an integer: \n";
    cin >> number;

    if(number%3==0)
    {
      int divisible = 0;
      divisible +=number;
      out << divisible << "\n";
      total++;
    }
  }
  out.close();
  ifstream in;
  in.open("numbers.txt");

  if (in.is_open())
  {
    cout << "\nThese are the first 20 set of numbers divisible by 3: \n";
    while (getline (in,line) )
    {
      cout << line << '\n';
    }
    in.close();
  }
  return 0;
}
