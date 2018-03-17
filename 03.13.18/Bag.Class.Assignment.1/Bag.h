// Name: Joel Turbi
// Due: 03/20/2018
#ifndef BAG_H
#define BAG_H
#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;
typedef  int bag_type;

class Bag{
public:
  static const size_t CAPACITY = 20;

  //  Default constructor
  Bag()
  {
    // Set the initial state of the bag.
    count = 0;
  }
  // Clear the bag
  void Clear()
  {
    count = 0;
  }
  //Place a value in Bag
  bool Insert(bag_type value)
  {
    bool reply;
    if(count <20 )
    {
       data[count]=value;
       reply=true;
       count++;
    } else {
       reply=false;
    }
    return reply;
  }
  // Is a value in the bag?
  bool InBag(bag_type value)
  {
     bool reply=false;
     int  index;
     for(index=0;index < count && !reply;index++)
        if(data[index] == value) reply=true;
     return reply;
  }
  // How many of element;
  int HowMany(bag_type value)
  {
     int thismany=0;
     int index;
     for(index=0;index<count;index++)
        if(data[index]==value) thismany++;
     return thismany;
  }
  // Remove a value
  bool Remove(bag_type value)
  {
     bool reply=false;
     int  index;
     if(HowMany(value) == 0) return reply;
     reply=true;
     index=0;
     while(data[index] != value) index++;
     for(;index < count; index++)
        data[index]=data[index+1];
     count--;
  }
  // How many elements in bag?
  int Size()
  {
     return count;
  }
  bool IsExist(bag_type value)
  {
    for( int i = 0; i < count; i++)
    {
      if(data[i] == value)
      {
        return true;
      }
      else
        return false;
    }
  }
  bool IsFull()
  {
      return count == CAPACITY ? TRUE : FALSE;
  }

protected:
  // members in bag
  size_t count;
  // data stores up to 20 members
  bag_type data[CAPACITY];
};

// Sets Class
class Sets : public Bag
{
  void add(int element)
  {
    if(!IsExist(element) && !IsFull())
    {
      Insert(element);
    }
  }

};
#endif
