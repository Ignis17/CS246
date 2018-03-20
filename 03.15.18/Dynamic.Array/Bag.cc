
// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018

#include "Bag.h" // Includes bag class as well as its  preprocessor directives.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  Bag b;
  bag_type value;
  int limit=0;

  cout << "First Bag" << endl;
  do {
     value=rand()%9 +1;
     if(limit++ > 20) break;
  } while(b.Insert(value));
  cout << b.Size()<< " elements in the bag" << endl;
  cout << b.HowMany(4) << " fours " << endl;
  b.Remove(4);
  cout << b.Size()<< " elements in the bag" << endl;
  cout << b.HowMany(4) << " fours " << endl;

  return 0;
}
