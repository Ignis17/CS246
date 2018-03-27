// This program selects and displays the first 20 integer
// numbers that are evenly divisible by 3.
// Names: Joel Turbi
// Course: CS246
// Assignment: Exercise 2
// Due by: 02/16/2018
#define NDEBUG
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cassert> // Needed for assert function.
using namespace std;

int Integers()
{

  const int MAXCOUNTER = 1000, // Constant variables initialization.
            MAXTOTAL = 20;
  int total = 1; // Initialized variable for the total number of integers that must be divisible by 3.
  int counter = 1; // Initialized variable for the total number of times the program must run if no numbers
                   // divisible by 3 are entered by user.
  string line;     // string variable declared.
  ofstream out;
  out.open("numbers.txt"); // name of file where values will be stored.

  // This loop will run for as long as the condition is true.
  while(total <= MAXTOTAL && counter <= MAXCOUNTER)
  {
    // Pre-condition: Ensures that condition is met and that it does not
    // go any further than it is supposed to.
    // Post-condition: Gets input from user, validates values and stores it.
    assert(counter <= MAXCOUNTER && total <= MAXTOTAL); // Assert condition
    int number; //

    // Prompts and asks user to input and integer.
    cout << "Please enter an integer: \n";
    cin >> number;

    // Checks if number/integer entered by the user is divisible by 3.
    if(number%3==0)
    {
      // Pre-condition: Checks to see that integer received from user is
      // divisible by 3.
      // Post-condition: Once it is verified that is it an integer divisible by
      // it is then stored in text file.
      assert(number%3==0); // Assert condition.
      int divisible = 0; // Temp variable to calculate  if number is divisible by 3.
      divisible +=number; // Number entered is added to temp variable.
      out << divisible << "\n"; // integer is then written/stored to txt file.
      total++;  // total is incremented by 1 each time the condition is met.
    }
    counter++;  // Counter is incremented by 1.
  }
  out.close(); // ofstream file is closed.

  ifstream in;

  in.open("numbers.txt");

  // checks if file is open, if it is statements are then executed.
  if (in.is_open())
  {
    cout << "\nThese are the first 20 set of numbers divisible by 3: \n";
    while (getline(in,line))
    {
      cout << line << '\n'; // Displays the list of 20 numbers that are
                          // divisible by 3.
    }
    in.close(); // ifstream file is closed.
  }
} 

int main()
{
  Integers(); // Function call
  return 0;
}
