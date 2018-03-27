// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items. This assignment modifies the Bag class with a derived set class
// to replace static arrays with dynamic arrays.
// Author: Joel Turbi
// Course: CS246
// Assignment: Dynamic Array & Set Class
// Due: 03/22/2018

#include "Bag.h"
#include <iostream>
#include <algorithm>    // std::set_union,std::set_intersection, std::sort
#include <vector>      // std::vector
#include <cstdlib>
#include <cassert>
using namespace std;

 Bag::Bag()    // Constructor
 {
     //
     //  create dynamic storage for bag
     //  set initial values for count and size
     //
     count = 0;
     bagsize = 20;  // start With 20 members
     data = new int[bagsize];
 }

 Bag::Bag(Bag& copy)  // Copy constructor
 {
     //
     //   Creates a copy of existing Bag
     //
     int index;
     data = new int[copy.bagsize];
     for(index = 0;index < copy.count;index++)
          assert(index < copy.count);
         data[index] = copy.data[index];
     count = copy.count;
     bagsize = copy.bagsize;
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
   Bag temp; // temp bag obj.

   int index = 0;
   while(index < count && temp.Insert(data[index])){
     index++;
   }

   index = 0;
   while(index < in.count && temp.Insert(in.data[index])){
     index++;
   }
   return temp;
 }

 Bag& Bag::operator=(const Bag& in)
 //
 //   Copy one bag to another
 //
 {
     int index;
     for(index = 0;index < in.count;index++){
       assert(index < in.count);
       Insert(in.data[index]);
     }
     return *this;
 }

 void Bag::Clear()
 //
 //  set a bag to empty
 //
 {
     count = 0;
 }

 bool Bag::Insert(const bag_type& value)
 //
 //  place a value  in the bag
 //
 {
     bool reply;
     if(count == bagsize) Resize();
     if(count < bagsize ){
       assert(Size() < bagsize);
       data[count] = value;
       reply = true;
       count++;
     }
     else{
       reply = false;
     }
     return reply;
   }

 bool Bag::InBag(const bag_type& value)
 //
 //   check if a value is in the bag
 //
 {
     bool reply = false;
     int  index;
     for(index = 0;index < count && !reply;index++){
       assert(index < count && !reply);
       if(data[index] == value) reply = true;
     }
     return reply;
   }

 int Bag::HowMany(const bag_type& value)
 //
 // How many of an element are in the bag?
 //
 {
     int thismany=0;
     int index;
     for(index = 0;index < count;index++){
       assert(index < count);
       if(data[index] == value) thismany++;
     }
     return thismany;
 }

 bool Bag::Remove(const bag_type& value)
 //
 //  remove an element from the bag
 //
 {
   bool reply = false;
   int  index;
   if(HowMany(value) == 0) return reply;
   reply = true;
   index = 0;
   while(data[index] != value) index++;
   for(;index < count;index++){
     assert(index < count);
     data[index] = data[index+1];
   }
   count--;
  }

 int* Bag:: GetData()
 // Retrieves dynamic data array.
 {
   int *dat;
   dat = new int[Size()];
   for(int i = 0;i < bagsize; i++)
   {
     assert(i < bagsize);
     dat[i] = data[i];
   }
   return dat;
 }

 int Bag::Size() const
 //
 // How many elements are there in the bag?
 //
 {
    return count;
 }

 void Bag::Resize()
 //
 // Private function to increase the size
 // of the data store
 //
 {
    int newsize = bagsize+(bagsize/2);
    int *newdata,*olddata;
    int index;

    olddata = data;
    newdata = new int[newsize];

    for(index = 0;index < bagsize; index++){
      assert(index < bagsize);
      newdata[index] = olddata[index];
    }

    delete [] data;

    data = newdata;
    bagsize = newsize;
 };

 // Public member functions for sets class
 Set::Set(){
   int size = Bag::Size();
   a = new int[size];
   b = new int[size];
 }
 Set::~Set(){ if(a != NULL) delete [] a;  if(b != NULL) delete [] b;}

 // This function performs the Union between dymamic array a and b.
 void Set::Union(bag_type* arr1,bag_type* arr2)
 {
   vector<int> v(20); // Initialized vector arrays
   vector<int>::iterator it;

   sort(arr1,arr1+15); // sort first array
   sort(arr2,arr2+20); // sort second array

   // calls function set_union and assigns it to vector array.
   it = set_union(arr1,arr1+15,arr2,arr2+20,v.begin());

   // Displays results of union set.
   cout << "The union has " << (v.size()) << " elements:\n";
   for(it = v.begin(); it != v.end(); ++it)
   {
     cout << ' ' << *it;
     cout << '\n';
   }
 }

 // This function performs the Intersection between dynamic array a and b.
 void Set::Intersection(bag_type* arr1,bag_type* arr2)
 {
   vector<int> v(20); // Initialized vector arrays
   vector<int>::iterator it;

   sort(arr1,arr1+15); // sort first array
   sort(arr2,arr2+20); // sort second array

   // calls function set_intersection and assigns it to vector array.
   it = set_intersection(arr1,arr1+15,arr2,arr2+20,v.begin());
   v.resize(it-v.begin());

   // Displays  results of intersection set.
   cout << "\nThe intersection has " << (v.size()) << " elements:\n";
   for (it = v.begin(); it != v.end(); ++it)
   {
     cout << ' ' << *it;
     cout << '\n';
   }
 };
