#include <iostream>
using namespace std;


int main() {
    bool isAdmin = 10; // the value should be true, false, 0 (same false) and any number that will be true
    cout << isAdmin << endl;

    //char symbol = '#';
    char symbol('#') ; // other valid syntax to init a var
    cout << symbol << endl;

    // datatype modifiers
    // singed unsigned long short
    unsigned short int age = 45;
    cout << age << endl;

    float pi = 3.14;
    const double PI = 3.14;
    cout << pi << endl;
    cout << PI << endl;

    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(char8_t) << " byte" << endl;
    cout << sizeof(char16_t) << " byte" << endl;
    cout << sizeof(char32_t ) << " byte" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(long) << " bytes" << endl;
    cout << sizeof(double ) << " bytes" << endl;
}
