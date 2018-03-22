// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018

#include "Bag.h"
#include "Bag.cc"

int main(){
  Bag b; // first Bag object.
  Bag x; // second Bag object.
  Set u; // Sets object.
  bag_type value;
  int limit=1;

  while(limit <= 20){b.Insert(limit);limit++;}
  cout << "First Bag" << endl;
  cout << b.Size()<< " elements in the bag" << endl;

  cout << endl << "Second Bag " << endl;
  x = b; // second bag a copy of first.
  cout << x.Size() << " elements in bag" << endl;

  cout << endl;
  u.Union(x.GetData(), b.GetData());
  u.Intersection(x.GetData(), b.GetData());
  return 0;
}
