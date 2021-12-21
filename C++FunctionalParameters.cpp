#include <iostream>
using namespace std;
// Parameter arguments 
void arguments(string name){
    cout << "My name is : " << name << endl;
}
// default parameters
void defaultparameter(string cars = "Mc Laren") {
    cout << "I have " << cars << " in my home" << endl;
}
// Multiple Parameters
void multipleparameter(string firstname , int age){
     cout << "My name is " << firstname << " and my current age is " << age << endl;                   
}
int main(){
    
      arguments("Mayank Pal");
      arguments("Amrita Madhu");
      arguments("Gourav Kumar");
      arguments("Nishika Singh");

      defaultparameter("Lamborgini");
      defaultparameter("ferrari");
      defaultparameter("Mercedes Benz");
      defaultparameter();

      multipleparameter("Shivayee Singh Obreoi" , 30);
      multipleparameter("Omkara Obreoi" , 31);
      multipleparameter("Rudhra Oberoi" , 32);
      return 0;
}