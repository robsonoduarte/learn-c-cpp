#include <iostream>
using namespace std;

int main(){

    // string initialization
    string title = "Mr. ";
    string name("Bravox");
    string end(10, '!');

    // access string methods
    cout << name.size() << endl;
    cout << name.back() << endl;

    // strings are indexed
    cout << name[1] << endl;

    // string concatenation
    cout << title + name << endl;

    // syntax sugar to concatenation
    name += " Duarte";

    // concatenation using append method
    name.append(end);

    cout << name << end;

    return 0;
}