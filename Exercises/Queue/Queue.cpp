// This program illustrates the Stack STL function.
// Name: Joel Turbi
// Course: CS246
// Created: 04/12/2018

#include <iostream>
#include <queue>
#include <fstream>

int main()
{
  std::queue<std::string> words;
  std::string text;
  std::ifstream file;
  file.open("war-madlib.txt");

  while(file>>text)
  {
    words.push(text);
  }
  file.close();

  while(!words.empty())
  {
    std::cout << words.front() << std::endl;
    words.pop();
  }
  return 0;
}
