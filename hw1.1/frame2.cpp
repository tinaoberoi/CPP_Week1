// Frame.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <format>
using namespace std;
using namespace fmt;

int main()
{
  cout << "What's your name? ";
  string name;
  cin >> name;

  // The message we intend to write
  const string greeting = format("Hello, {}!", name);
  const string mixed = "* " + string(greeting.size(), ' ') + " *\n";
  const string stars = string(mixed.size() - 1, '*') + "\n";

  cout << endl;
  cout << stars << mixed << format("* {} *\n", greeting) << mixed << stars << endl;

  return 0;
}

