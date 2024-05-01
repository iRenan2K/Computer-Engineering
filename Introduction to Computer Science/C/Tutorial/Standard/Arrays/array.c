#include <stdio.h>

// Array = a data structure that can store many values of the SAME data type.

int main() {
    // double prices[5] = {5.0, 10.0, 15.0, 20.0, 25.0};
    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;
    prices[4] = 25.0;

    printf("\n$%.2lf", prices[0]);
    printf("\n$%.2lf", prices[1]);
    printf("\n$%.2lf", prices[2]);
    printf("\n$%.2lf", prices[3]);
    printf("\n$%.2lf\n", prices[4]);

    return 0;
}