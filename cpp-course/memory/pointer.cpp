#include <iostream>

using namespace std;

int main() {
    int value = 98765;
    int &ref = value;
    int *pot = &value;

    cout << value << endl;
    cout << ref << endl;
    cout << *pot << endl;

    cout << &value << endl;
    cout << &ref << endl;
    cout << pot << endl;


    int * p1;
    int * p2 = nullptr;

    int x = 5;
    int y = 10;

    p1 = &x;
    cout << p1 << endl;
    cout << *p1 << endl;

    p2 = &y;
    cout << p2 << endl;
    cout << *p2 << endl;

    p1 = p2;
    cout << *p1 << endl;

    int arr[] = {47, 33, 72, 13, 88};
    int * p3 = &arr[0];
    cout << *p3 << endl;
    p3++;
    cout << *p3 << endl;
    p3++;
    cout << *p3 << endl;
    cout << p3[0] << endl;
    cout << p3[1] << endl;
    cout << p3[2] << endl;



    int w = 123;
    int* p4 = &w;
    cout << *p4 << endl;
    cout << p4[0] << endl;

    *p4 = 321;
    cout << *p4 << endl;
    cout << w << endl;

    return 0;
}