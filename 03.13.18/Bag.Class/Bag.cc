// This program is an implementation of the bag class. This is an intro to
// the container class. A container class is a class that can hold a collection
// of items.
// Author: Joel Turbi
// Course: CS246
// Assignment: Bag Class
// Due: 03/20/2018

#include "Bag.h" // Includes bag class as well as its  preprocessor directives.

int main()
{
    Bag b; // Bag object
    bag_type value; // Variable declaration from deftype.

    cout << " **** Bag Class **** " << endl;
    b.Insert(4); // adds 4 to the first index in the bag.
    b += b; // += operator used. It now contains another 4.
    // Generate random numbers between 1 to 9 and store them in the bag, until
    // it reaches its full size / capacity.
    do{
      //srand(time(NULL));
      value = rand() % 9 + 1;
    }while(b.Insert(value));

    // Display information in bag to user.
    cout << b.Size()<< " elements in the bag." << endl;
    cout << b.HowMany(4) << " fours " << endl;
    b.Remove(4); // Removes 4 from the bag.
    cout << b.Size()<< " elements in the bag." << endl;
    cout << b.HowMany(4) << " fours " << endl;
    cout << b.HowMany(5) << " fives " << endl;
    while(b.InBag(5)) b.Remove(5); // Removes every instance of element for
                                   // as long as it exists in the bag.
    cout << b.HowMany(5) << " fives " << endl;
    return 0;
}
