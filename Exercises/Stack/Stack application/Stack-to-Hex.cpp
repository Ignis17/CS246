#include <iostream>
#include <stack>

int main()
{
  std::stack<std::string> hex;
  int num,
      module,
      divident;
  std::string numStr = "";
  
  std::cout << "Please enter a number to convert to a hex:\n";
  std::cin >> num;

  divident = num;

  do
  {
    module = divident % 16;
    divident /= 16;

    switch(module)
    {
       case 0:
              hex.push("0");
              break;
       case 1:
              hex.push("1");
              break;
       case 2:
              hex.push("2");
              break;
       case 3:
              hex.push("3");
              break;
       case 4:
              hex.push("4");
              break;
       case 5:
              hex.push("5");
              break;
       case 6:
              hex.push("6");
              break;
       case 7:
              hex.push("7");
              break;
       case 8:
              hex.push("8");
              break;
       case 9:
              hex.push("9");
              break;
       case 10:
              hex.push("A");
              break;
       case 11:
              hex.push("B");
              break;
       case 12:
              hex.push("C");
              break;
       case 13:
              hex.push("D");
              break;
       case 14:
              hex.push("E");
              break;
       case 15:
              hex.push("F");
              break;
      default:
              break;
     }
  }while(divident != 0);

  // Display and remove stack.
  while(!hex.empty())
  {

    std::cout << hex.top() << std::endl;
    numStr += hex.top();
    hex.pop();
  }
  std::cout << numStr << std::endl;
  return 0;
}
