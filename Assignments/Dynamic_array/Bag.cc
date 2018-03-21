// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018
 #include "Bag.h"
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
   while(index < count && temp.Insert(data[index])) {
         index++;
   }
   index=0;
   while(index < in.count && temp.Insert(in.data[index])) {
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
         Insert(in.data[index]);
     return *this;
 }

 void Bag::Clear()  // Clear the bag
 {
     //
     //  set a bag to empty
     //
     count=0;
 }

 bool Bag::Insert(const bag_type& value)
 {
     //
     //  place a value  in the bag
     //
     bool reply;
     if(count == bagsize) Resize();
     if(count < bagsize ) {
           data[count]=value;
           reply=true;
           count++;
     } else {
           reply=false;
     }
     return reply;
 }

 bool Bag::InBag(const bag_type& value)
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

 int Bag::HowMany(const bag_type& value)
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

 bool Bag::Remove(const bag_type& value)
 {
       //
       //  remove an element from the bag
       //
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

 int Bag::Size() const
 {
    //
    // How many elements are there in the bag?
    //
    return count;
 }

 void Bag::Resize()
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
