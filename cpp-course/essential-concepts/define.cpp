#include <iostream>
using namespace std;

#define ZERO 0
#define SQUARE(X) X * X

int main(){
    cout << SQUARE(10) << endl; //cout << 10 * 10 << endl;
    cout << SQUARE(1 + 2) << endl; //cout << 1 + 2  * 1 + 2 << endl;
    return ZERO;
}