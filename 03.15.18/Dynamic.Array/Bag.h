// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018

#ifndef BAG_H
#define BAG_H
#include <iostream>
#include <cassert>
#include <algorithm>
typedef int bag_type;
using namespace std;
class Bag{

public:
  Bag();  // Constructor.
  Bag(Bag&);  // Copy constructor.
  ~Bag(); // Destructor
  bool Insert(bag_type); // Put a member in the bag.
  bool Remove(bag_type); // Remove a member from the bag.
  int Size(); //  Number of members from the bag.
  void Clear(); // Remove all members from the bag.
  bool InBag(bag_type); // Is a member in the bag?
  int  HowMany(bag_type); // How many members in the bag.
private:
  int count; // Members in bag.
  int bagsize; // Size of bag.
  bag_type *data; // Data store dynamically.
  void Resize(); // Increase the size of the bag.
};
#endif

Bag::Bag()
// Postcondition: The bag has been initialized as an empty bag.
{
  // Set the initial state of the bag.
  count = 0;
  bagsize = 20;
  data = new int[bagsize];
}

void Bag::Clear()
// Postcondition: Clears the bag.
{
  count = 0;
}

Bag::Bag(Bag& copy)
// Copy constructor.
{
  int index;
  data = new int[copy.bagsize];
  for(index = 0; index < copy.count; index++){
    data[index] = copy.data[index];
  }
  count = copy.count;
  bagsize = copy.bagsize;
}

Bag::~Bag()
{
  // Frees dynamic storage when a bag goes out of scope
  if(data != NULL) delete [] data;
}

bool Bag::Insert(bag_type value)
// Postcondition: Place a value in Bag.
{
  bool reply;
  if(count == bagsize) Resize();
  if(count < bagsize){
    assert(Size() < bagsize);
    data[count] = value;
    reply=true;
    count++;
  }
  else
     reply=false;
  return reply;
}

bool Bag::InBag(bag_type value)
// Postcondition: Check if value is in the bag.
{
   bool reply = false;
   int  index;
   for(index=0;index < count && !reply;index++)
      if(data[index] == value) reply=true;
   return reply;
}
int Bag::HowMany(bag_type value)
// How many of an element are in the bag?
{
   int thismany=0;
   int index;
    for(index=0;index < count;index++)
      if(data[index] == value) thismany++;
    return thismany;
}

bool Bag::Remove(bag_type value)
// Postcondition: if value is in the bag, then one copy has been removed;
// otherwise the bag is unchanged. A true return value indicates that one
// copy was removed; false indicates that nothing was removed.
{
    bool reply=false;
    int index;
    if(HowMany(value) == 0) return reply;
    reply=true;
    index=0;
    while(data[index] != value) index++;
    for(;index < count; index++)
      data[index]=data[index+1];
    count--;
}
int Bag::Size() 
// Postcondition: The return value is the total number of items in the bag.
{
   return count;
}
void Bag::Resize()
// Private function to increase the size of the data store.
{
  int newsize = bagsize +(bagsize/2);
  int *newdata, *olddata;
  int index;

  olddata = data;
  newdata = new int[newsize];

  for(index = 0; index < bagsize; index++){
    newdata[index] = olddata[index];
  delete [] data;

  data = newdata;
  bagsize = newsize;
  }
}
