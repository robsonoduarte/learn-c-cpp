#include <iostream>

using namespace std;

using binaryop = int (*)(int, int);

int exec(binaryop func, int a, int b) {
    return (*func)(a, b);
}

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << exec(add, 1, 2) << endl;
    return 0;
}
