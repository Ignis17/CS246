// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018

#include "Bag.h"
#include "Bag.cc"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  Bag b;
  bag_type value;
  int limit=0;

  cout << "First Bag" << endl;
  do {
     value=rand()%9 +1;
     if(limit++ > 25) break;
  } while(b.Insert(value));
  cout << b.Size()<< " elements in the bag" << endl;
  cout << b.HowMany(4) << " fours " << endl;
  b.Remove(4);
  cout << b.Size()<< " elements in the bag" << endl;
  cout << b.HowMany(4) << " fours " << endl;

  cout << endl << "Second Bag " << endl;
  Bag x=b;   // second bag a copy of first
  cout << x.Size() << " elements in bag" << endl;
  x.Clear();   // clear the bag
  cout << x.Size() << " elements in bag" << endl;
  for(value=0; value < 4 ; value++) x.Insert(4);
  cout << x.Size() << " elements in bag" << endl;
  cout << x.HowMany(4) << " fours " << endl;

  Bag y;
  y= x + x;
  cout << endl << "Third Bag  " << endl;
  cout << y.Size() << " elements in bag" << endl;
  cout << y.HowMany(4) << " fours " << endl;

  Bag z;
  z= x + b;
  cout << endl << "Fourth Bag  " << endl;
  cout << z.Size() << " elements in bag" << endl;
  cout << z.HowMany(4) << " fours " << endl;
  return 0;
}
