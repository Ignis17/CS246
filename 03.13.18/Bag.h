#ifndef BAG_H
#define BAG_H
#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;
typedef  int bag_type;

class Bag
{
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
    bool InBag(bag_type value)  // Is a value in the bag?
  {
     bool reply=false;
     int  index;
     for(index=0;index<count && !reply;index++)
        if(data[index] == value) reply=true;
     return reply;
  }
  int HowMany(bag_type value) //How many of element;
  {
     int thismany=0;
     int index;
     for(index=0;index<count;index++)
        if(data[index]==value) thismany++;
     return thismany;
  }
  bool Remove(bag_type value)  // Remove a value
  {
     bool reply=false;
     int  index;
     if(HowMany(value) == 0) return reply;
     reply=true;
     index=0;
     while(data[index] != value) index++;
     for(;index<count;index++)
        data[index]=data[index+1];
     count--;
  }
  int Size()    // How many elements in bag?
  {
     return count;
  }

private:
  size_t count;     // members in bag
  bag_type  data[CAPACITY];  // data store up to 20 members

};
#endif
