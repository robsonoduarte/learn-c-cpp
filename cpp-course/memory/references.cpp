#include <iostream>
using namespace std;

int main(){
    int a = 10; // 32 bits = 4 bytes

    cout << &a << endl;

    string name = "Robson Duarte";

    cout << &name << endl;

    int x = 7;
    int & xRef = x;

    cout << x << endl;
    cout << &x << endl;
    cout << xRef << endl;
    cout << &xRef << endl;

    x++;
    cout << xRef << endl;

    xRef--;
    cout << x << endl;

    string greeting = "Hi!";
    string & ref = greeting;


    cout << greeting << endl;
    cout << ref << endl;

    ref = name;

    cout << name << endl;
    cout << ref << endl;
    cout << greeting << endl;
    cout << &name << endl;
    cout << &ref << endl;
    cout << &greeting << endl;

    ref.append("!!!!");

    cout << greeting << endl;

    return 0;
}