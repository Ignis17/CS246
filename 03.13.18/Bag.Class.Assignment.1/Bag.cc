// Name: Joel Turbi
// Due: 03/20/2018
#include "Bag.h" // Includes bag class

int main(int argc, char *argv[])
{
    Bag b;
    bag_type value;

    cout << "**** Bag Class ****" << endl;
    b.Insert(4);

    do
    {
      value=rand() % 9 + 1;
    }while(b.Insert(value));

    cout << b.Size()<< " elements in the bag" << endl;
    cout << b.HowMany(4) << " fours " << endl;
    b.Remove(4);
    cout << b.Size()<< " elements in the bag" << endl;
    cout << b.HowMany(4) << " fours " << endl;
    cout << b.HowMany(5) << " fives " << endl;
    while(b.InBag(5)) b.Remove(5);
    cout << b.HowMany(5) << " fives " << endl;
    return 0;
}
