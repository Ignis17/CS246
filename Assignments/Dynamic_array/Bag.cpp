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
  Bag b;
  bag_type value;
  int* num;
  num = new int[20];
  int limit=0;

  cout << "First Bag" << endl;
  do {
     value=rand()%9 +1;
     if(limit++ > 19) break;
  } while(b.Insert(value));

  cout << b.Size()<< " elements in the bag" << endl;

  cout << endl << "Second Bag " << endl;
  Bag x=b;   // second bag a copy of first
  cout << x.Size() << " elements in bag" << endl;

  return 0;
}
