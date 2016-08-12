// static.cpp -- using a static local variable
#include <iostream>
#include <string>

void strcount(std::string);
int main()
{
  using namespace std;
  string input;

  cout << "Enter a line:\n";
  getline(cin,input);
  while (input != "")
  {
    strcount(input);
    cout << "Enter next line (empty line to quit):\n";
    getline(cin,input);
    
  }
  cout << "Bye\n";
  return 0;
}
//void strcount(const char * str)
void strcount(std::string str)
{
  using namespace std;
  static int total = 0; // static local variable
  int count = 0; // automatic local variable
  cout << "\"" << str <<"\" contains ";
  count = str.size();
  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}
