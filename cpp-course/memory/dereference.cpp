#include <iostream>
using namespace  std;

int main(){

    double pi = 3.14;
    double & piRef = pi;

    cout << piRef << endl;
    cout << &pi << endl;

    // * -> deference operator
    // this of as  "get value at..."
    cout << *&pi << endl;

    // * is used to create a pointer

    return 0;
}