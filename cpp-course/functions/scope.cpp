#include <iostream>

using namespace std;

int g = 1;

void func3() {
    int g = 0;
    g += 100;
    cout << g<< endl;
}

void func2() {
    func3();
    {
        int a = 3;
        cout << a << endl;
    }
}

void func1() {
    g++;
    func2();
}

int main() {
    func1();
    cout << g << endl;
    return 0;
}