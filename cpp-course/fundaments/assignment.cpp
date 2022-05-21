#include "iostream"
using namespace std;

int main(){

    // assigment operators >> https://en.cppreference.com/w/cpp/language/operator_assignment

    int x;
    cout << "Enter the initial value: ";
    cin >> x;

    x += 10; // x = x + 10
    cout << x << endl;

    x -= 10; // x = x - 10
    cout << x << endl;

    x *= 10; // x = x * 10
    cout << x << endl;

    x /= 10; // x = x / 10
    cout << x << endl;

    x %= 10; // x = x % 10
    cout << x << endl;


    return 0;
}