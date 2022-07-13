#include <iostream>

using namespace std;

#define ZERO 0
#define SQUARE(X) X * X

int main() {
#ifdef SQUARE
    cout << SQUARE(10) << endl;
    cout << SQUARE(1 + 2) << endl;
#else
    cout << "else..." << endl;
#endif
    return ZERO;
}