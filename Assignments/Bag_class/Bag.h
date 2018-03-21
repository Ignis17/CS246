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
#include <cstdlib>
#include <algorithm>
#include <cassert>
#include <ctime>
using namespace std;
typedef int bag_type;

class Bag{
public:
  // CAPACITY is the maximum number of items that a bag can hold.
  static const size_t CAPACITY = 20;

  Bag()
  // Postcondition: The bag has been initialized as an empty bag.
  {
    // Set the initial state of the bag.
    count = 0;
  }
  void Clear()
  // Postcondition: Clears the bag.
  {
    count = 0;
  }
  bool Insert(const bag_type& value)
  // Postcondition: Place a value in Bag.
  {
    bool reply;
    if(count < CAPACITY){
      assert(Size() < CAPACITY);
      data[count]=value;
      reply=true;
      count++;
    }
    else
      reply=false;
    return reply;
  }
  void operator +=(const Bag& addend)
  // Library facilities used: algorithm, cassert
  {
    assert(Size() + addend.Size() < CAPACITY);
    copy(addend.data, addend.data + addend.count, data + count);
    count += addend.count;
  }
  bool InBag(const bag_type& value)
  // Is a value in the bag?
  {
     bool reply=false;
     int  index;
     for(index=0;index < count && !reply;index++)
        if(data[index] == value) reply=true;
     return reply;
  }
  int HowMany(const bag_type& value) const
  // How many of element;
  {
     int thismany=0;
     int index;
     for(index=0;index<count;index++)
        if(data[index]==value) thismany++;
     return thismany;
  }

  bool Remove(const bag_type& value)
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
  int Size() const
  // Postcondition: The return value is the total number of items in the bag.
  {
     return count;
  }
  void DisplayBag(){
    bag_type index = 0;
    while(index < CAPACITY){
      cout << data[index] << " ";
      index++;
    }
  }

private:
  // members in bag
  size_t count;
  // Array named data that stores up to 20 members.
  bag_type data[CAPACITY];
};
#endif
