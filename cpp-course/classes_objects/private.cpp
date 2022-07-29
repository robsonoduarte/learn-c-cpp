#include <iostream>
using namespace std;

const double MINIMUM_WAGE = 1500;


class Employee{
public:
    string name;
private:
    double wage = MINIMUM_WAGE;
public:
    double getWage(){
        return wage;
    }
    void setWage(double wage){
        if(wage >= MINIMUM_WAGE){
            this->wage = wage;
        }
    }

};


int main(){
    Employee emp;
    emp.name = "Robson";
    emp.setWage(2000);

    cout << emp.getWage() << endl;

    return 0;
}