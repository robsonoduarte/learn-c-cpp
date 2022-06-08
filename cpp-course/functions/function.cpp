#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello!" << endl;
}

void sayHelloTo(string name){
    cout << "Hello " << name << "!" << endl;
}

string returnHi(){
    return "Hi";
}

string returnHiTo(string name){
    return "Hi" + name + "!";
}

// function prototype with default value for param
void log(int number = 0, bool newLine = true);


int max(int n1, int n2){
    return n1 >= n2 ? n1 : n2;
}

int main(){
    sayHello();
    sayHelloTo("Robson");
    cout << returnHi() << "!" << endl;
    returnHiTo("Robson");

    log(20, false);
    log(30);
    log(40);
    log();

    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    cout << "Max: " << max(a, max(b, c)) << endl;

    return 0;
}



void log(int number, bool newLine) {
    cout << "Number:" << number;
    newLine ? cout << endl : cout << " ";
}
