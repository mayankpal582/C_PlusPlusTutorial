#include <iostream>
using namespace std;
int main(){
    // if condition
    if (20>18){
        cout << "20 is greater than 18" << endl;
    }
    int x = 88;
    int y = 89829;
    if (y>x){
        cout << "y is greater than x" << endl;
    } 
    // else condition
    int time = 10;
    if (time == 210){
        cout << "time is not equal";  
    }
    else{
        cout << time << endl;
    }
    // elif condition
    int age = 100;
    if (age < 18 ){
        cout << "Not adult";
    }
    else if (age > 18 && age < 90)
    {
        cout << "adult";
    }
    else{
      cout << "Aged guy" ;
   }
}
