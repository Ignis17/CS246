// This program
// Author: Joel Turbi
// Created: 03/22/2018

#include <iostream> // Provides cout and cin
#include <cctype> // Provides toupper
#include <cstdlib> // Provides EXIT_SUCCESS and size_t
#include "Node.h" // Node class.
#include "List.h" // Linked list toolkit
using namespace std;
using namespace list;
// PROTOTYPES
void Print_Menu(); // Postcondition: A menu of choices for this program has been
                    // written to cout.
char Get_User_Command(); // Postcondition: The user has been prompted to enter
                        // a one character command. The next character has been
                        // read (Skipping blanks and newline characters), and this
                        // character has been returned.
void Show_List(Node* display); // Postcondition: The items on display have been printed to cout
                  // (one per line).
double Get_Number(const char* message); // Postcondition: The user has been prompted to enter a real number.
                    // The number has been read, and returned by the function.
size_t Get_Position(const char* message); // Postcondition: The user has been prompted to enter a position
                      // in the list. The number has been read, and returned by the fucntion.

int main()
{
  Node* test; // A list that we'll perform tests on.
  char choice; // A command character entered by the user.
  double value; // A value that is stored on the linked list.
  size_t position; // A position in a list.
  size_t start; // Argument to List_Copy_Segment.
  size_t finish; // Argument to List_Copy_Segment.
  Node* segment; // Result of call to List_Copy_Segment.

  test = NULL;
  cout << "I have initialized an empty linked list of real numbers.\n";

  do
  {
    Print_Menu();
    choice = toupper(Get_User_Command());
    switch(choice)
    {
      case 'C':
          value = Get_Number("Type the number to count the occurances of: ");
          cout << "There are " << List_Occurrences(test, value);
          cout << " occurrences of " << value << ".\n";
          break;
      case 'I':
          value = Get_Number("Type the number to insert: ");
          position = Get_Position("Type the position for the insertion: ");
          List_Insert_At(test, value, position);
          cout << value << " has been inserted at position ";
          cout << position << ".\n";
          break;
      case 'R':
          position = Get_Position("Type the position for the removal: ");
          value = List_Remove_At(test, position);
          cout << value << " has been removed from position ";
          cout << position << ".\n";
          break;
      case 'S':
          start = Get_Position("Type the start position: ");
          finish = Get_Position("Type the finish position: ");
          cout << "Here is the result of the copy of that segment: \n";
          segment = List_Copy_Segment(test, start, finish);
          Show_List(segment);
          List_Clear(segment);
          break;
      case 'P':
          cout << "The list has these items: \n";
          Show_List(test);
          break;
      case 'Q':
          cout << "Ridicule is the best test of truth.\n";
          break;
      default:
          cout << choice << " is invalid. \n";
    }
  }while(cin && (choice != 'Q'));

  if(!cin)
      cerr << "Bad input character.\n";

  return EXIT_SUCCESS;
}

void Print_Menu()
// Library facilities used: iostream
{
  cout << "\nThe following choices are available: \n";
  cout << " C  Count the number of occurrences of some number\n";
  cout << " I  Insert a new number at some specified position\n";
  cout << " R  Remove a number from some specified position\n";
  cout << " S  Copy the front of the list, and print this segment\n\n";
  cout << " P  Print the current list\n";
  cout << " Q  Quit this test program\n";
}

char Get_User_Command()
// Library facilities used: iostream
{
  char command;

  cout << "Enter a choice: \n";
  cin >> command; // Input of charactes skips blanks and newline character.

  return command;
}

void Show_List(Node* display)
// Library facilities used: iostream
{
  while(display != NULL)
  {
    cout << display->Data() << endl;
    display = display->Link();
  }
}

double Get_Number(const char* message)
// Library facilities used: iostream
{
  double result;

  cout << message;
  cin >> result;
  return result;

}

size_t Get_Position(const char* message)
// Library facilities used: iostream, cstdlib
{
  size_t result;

  cout << message;
  cin >> result;
  return result;
}
