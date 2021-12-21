#include <iostream>
using namespace std;
// Void means this function does not have return value
// myfunction is a name of the function
void myfunction(){
    cout << "I just get executed";
}
int main(){
    // A functio is a block of code wich only runs when it called. 
    // You can pass data , known as parameters , into  a function.
    // They are important for reuse code.
    // calling a function
    myfunction();
    // We can call function as manytimes we want.
    myfunction();
    myfunction();
    return 0;

}