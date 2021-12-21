#include <iostream>
using namespace std;
int main(){
    // String
    string name = "Shivayee Singh Obreoi";
    cout << name << endl;
    // Concatination :- to combine the words using '+' or "append function"
    string first_name = "Mayank";
    string second_name = "Pal";
    string add = first_name +" "+ second_name;
    cout << add << endl;
    string name1 = "omkara";
    string name2 = "obreoi";
    string adin = name1.append(name2);
    cout << adin << endl;
    // Length Of String
    string txt = "jdjdjkjkjkjkjksdlklklaklaklhhhhhhssjsgshhshdhkhfshfkf";
    cout << "the length of our string is : " << txt.length() << endl;
    // Access String 
    string mystring = "This is My String";
    cout << mystring[0] << endl;
    cout << mystring[1] << endl;
    cout << mystring[2] << endl;
    cout << mystring[3];
}