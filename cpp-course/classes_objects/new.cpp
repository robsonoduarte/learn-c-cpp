#include <iostream>

using namespace std;

class Person {
public:
    string name;

    Person(string name) : name(name) {

        cout << "Hello! May name is " << name << endl;
    }

    ~Person() {
        cout << name << " saying goodbye !" << endl;
    }
};


Person* createPerson() {
    Person* p = new Person("Bravox");
    return p;
}


int main() {


    // using primitives
    int x = 5; // stack

    // new => malloc() + constructor
    int *y = new int(10); // heap 4 bytes

    cout << x * *y << endl;

    // delete => free() + destructor
    delete y;

    int *w = new int[100]; // 4 bytes * 100 = 400 bytes

    w[49] = 123;

    cout << w[49] << endl;

    delete[] w;

    // using class

    // new operator memory on the heap
    // and class constructor
    Person *person = new Person{"Robson"};

    // delete operator frees memory
    // and class destructor
    delete person;

    // manually loc memory
    Person *p = (Person *) malloc(sizeof(Person));
    free(p);

    // create object with another scope
    Person* p3 = createPerson();
    cout << p3->name << endl;

    delete p3;

    return 0;
}