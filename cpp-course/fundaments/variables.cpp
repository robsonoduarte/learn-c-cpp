#include "cstdio"

int main(){

    // type identifier (name) = value;
    double price = 99.80;
    double tax = 0.08;

    // type identifier (name) = exp;
    double finalPrice = price * (1 + tax);

    printf("The final price is %.4f", finalPrice);

    return 0;
}
