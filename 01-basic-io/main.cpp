#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string name = ""; // Declaration & Initialization of a variable
  int age; // Declaration of a variable with an integer type
  cout << "Hello user, what do people call you?\n";
  cin >> name; 
  cout << "Hello, " << name << ". It's nice to meet you!\n";
  cout << "How old are you " << name << "?\n";
  cin >> age;
  cout << age << "! That is great!"; 
  return 0;
}
