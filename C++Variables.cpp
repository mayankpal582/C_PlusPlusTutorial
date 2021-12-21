#include <iostream>
using namespace std;
int main(){
    /*
      Different types of variables :-
      1. int :- 123
      2. double :- 19.99 or -19.99
      3. char :- "A" , 'a'
      4. string :- "Store "
      5. bool :- True or False
    */
   int num1 = 78378;
   int a = 77;
   int b = 88;
   int age = 21;
   float num2 = 8938987387387;
   double num3 = 62526.227;
   char letter = 'D';
   string name = "Spider-Man";
   cout << num1 << endl;
   cout << num2 << endl;
   cout << num3 << endl;
   cout << name << endl; 
   cout << letter << endl ;
   cout << "My age " << age << " years old " << endl;
   int sum = a+b;
   cout << sum ;
   int dif = a-b;
   cout << dif << endl ;
   int mult  = a * b ;
   cout << mult << endl; 
   // Declaring multiple variables
   int x = 5 , y = 9 , z = 50;
   int sum1 = x+y+z;
   cout << sum1 << endl; 
   // Constants
   const int minutesperhr = 60;
   cout << minutesperhr << endl;
   const float PI = 3.14;
   cout << PI ;

}