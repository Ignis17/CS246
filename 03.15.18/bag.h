
//
#ifndef _BAG_
#define _BAG_

typedef int bag_type;

class Bag {

private:
        int       count;     // members in bag
        int       bagsize;   // size of bag
        bag_type  *data  ;  // data store dynamic
        void      resize(); // increase the size of the bag

public:
             Bag();              // Constructor
             Bag(Bag&);          // Copy Constructor
             ~Bag();             // Destructor
     bool    insert(const bag_type&);   // Put a member in the bag
     bool    remove(const bag_type&);   // remove a member from the bag
     int     size() const;             // number of member in bag
     void    clear();            // remove all members from bag
     bool    inbag(const bag_type&);    // is a member in the bag?
     int     howmany(const bag_type&);  // how many member in bag.
     Bag     operator+(const Bag&);     // Bag join overloaded operator
     Bag&    operator=(const Bag&);     // Assignment
};
#endif
