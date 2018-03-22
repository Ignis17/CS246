// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items. This assignment modifies the Bag class with a derived set class
// to replace static arrays with dynamic arrays.
// Author: Joel Turbi
// Course: CS246
// Assignment: Dynamic Array & Set Class
// Due: 03/22/2018

#include "Bag.h"
#include "Bag.cc"

int main(){
  Bag b; // first Bag object.
  Bag x; // second Bag object.
  Set u; // Sets object.
  bag_type value;
  int limit = 1;

  while(limit <= 20){b.Insert(limit);limit++;} // Assigns a value to the bag
                                               // class. Which is then used
                                               // by the set class.
  // Display bag info
  cout << "First Bag" << endl;
  cout << b.Size()<< " elements in the bag" << endl;
  cout << endl << "Second Bag " << endl;
  x = b; // second bag a copy of first.
  cout << x.Size() << " elements in bag" << "\n\n";

  // Display set info
  u.Union(x.GetData(), b.GetData()); // calls Union function from the set class.
  u.Intersection(x.GetData(), b.GetData()); // calls Intersection funtion from
                                            // the set class.
  return 0;
}
