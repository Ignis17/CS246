// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018

#ifndef BAG_H
#define BAG_H
typedef int bag_type;

class Bag{

public:
  Bag();  // Constructor.
  Bag(Bag&);  // Copy constructor.
  ~Bag(); // Destructor
  bool Insert(const bag_type&); // Put a member in the bag.
  bool Remove(const bag_type&); // Remove a member from the bag.
  int Size() const; //  Number of members from the bag.
  void Clear(); // Remove all members from the bag.
  bool InBag(const bag_type&); // Is a member in the bag?
  int  HowMany(const bag_type&); // How many members in the bag.
  Bag operator +(const Bag&); // Bag join overloaded operator
  Bag& operator =(const Bag&); // Assignment overloaded operator
private:
  int count; // Members in bag.
  int bagsize; // Size of bag.
  bag_type *data; // Data store dynamically.
  void Resize(); // Increase the size of the bag.
};
#endif
