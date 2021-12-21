#include <iostream>
using namespace std;
int main(){
  string food = "Pizza";
  cout << food << "\n";
  // A pointer is a varible which stores memory address as it value
  cout << &food << "\n";
   string* ptr = &food;  // A pointer variable that stores the address of food
   cout << ptr << endl;
  return 0;
}