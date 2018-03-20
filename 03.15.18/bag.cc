//
#include "bag.h"
#include <iostream>

  Bag::Bag()    // Constructor
  {
      //
      //  create dynamic storage for bag
      //  set initial values for count and size
      //
      count=0;
      bagsize=20;  // start With 20 members
      data = new int[bagsize];
  }

  Bag::Bag(Bag& copy)  // Copy constructor
  {
      //
      //   Creates a copy of existing Bag
      //
      int index;
      data = new int[copy.bagsize];
      for(index=0;index<copy.count;index++)
          data[index]=copy.data[index];
      count=copy.count;
      bagsize=copy.bagsize;
  }

  Bag::~Bag()
  {
      //
      //  Frees dymanic storage when a bag goes out of scope
      //
      if(data != NULL) delete [] data;
  }


  Bag Bag::operator+(const Bag& in) // Bag union
  {
    Bag temp;

    int index=0;
    while(index < count && temp.insert(data[index])) {
          index++;
    }
    index=0;
    while(index < in.count && temp.insert(in.data[index])) {
          index++;
    }
    return temp;
  }

  Bag& Bag::operator=(const Bag& in)
  {
      //
      //   Copy one bag to another
      //
      int index;
      for(index=0;index<in.count;index++)
          insert(in.data[index]);
      return *this;
  }



  void Bag::clear()  // Clear the bag
  {
      //
      //  set a bag to empty
      //
      count=0;
  }

  bool Bag::insert(const bag_type& value)
  {
      //
      //  place a value  in the bag
      //
      bool reply;
      if(count == bagsize) resize();
      if(count < bagsize ) {
            data[count]=value;
            reply=true;
            count++;
      } else {
            reply=false;
      }
      return reply;
  }

  bool Bag::inbag(const bag_type& value)
  {
      //
      //   check if a value is in the bag
      //
      bool reply=false;
      int  index;
      for(index=0;index<count&& !reply;index++)
          if(data[index] == value) reply=true;
      return reply;
  }

  int Bag::howmany(const bag_type& value)
  {
      //
      // How many of an element are in the bag?
      //
      int thismany=0;
      int index;
      for(index=0;index<count;index++)
          if(data[index]==value) thismany++;
      return thismany;
  }

  bool Bag::remove(const bag_type& value)
  {
        //
        //  remove an element from the bag
        //
        bool reply=false;
        int  index;
        if(howmany(value) == 0) return reply;
        reply=true;
        index=0;
        while(data[index] != value) index++;
        for(;index<count;index++)
             data[index]=data[index+1];
        count--;
  }

  int Bag::size() const
  {
     //
     // How many elements are there in the bag?
     //
     return count;
  }



  void Bag::resize()//
  {
     //
     // Private function to increase the size
     // of the data store
     //
     int newsize=bagsize+(bagsize/2);
     int *newdata, *olddata;
     int index;

     olddata=data;
     newdata = new int[newsize];

     for(index=0;index<bagsize; index++)
         newdata[index]=olddata[index];

     delete [] data;

     data=newdata;
     bagsize=newsize;
  }
