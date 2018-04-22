#include <iostream>
#include <stack>

void writeBinary (int n)
{
  std::stack<int> myStack;
  myStack.push(n);

  while (n > 1)
	{
    	n = n / 2;
      myStack.push (n);
  } // pushing
  while (!myStack.empty())
	{
    	n = myStack.top();
      myStack.pop();
      std::cout << (n % 2);
  } // popping
  std::cout << std::endl << std::endl;
} // method writeBinary

int main()
{
  int num;

  // Ask for integer number.
  std::cout << "Enter an integer to convert to binary:\n";
  std::cin >> num;
  // Calls function to convert int to binary.
  writeBinary(num);
  return 0;
}
