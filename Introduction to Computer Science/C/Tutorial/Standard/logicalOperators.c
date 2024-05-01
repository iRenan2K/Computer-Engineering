#include <stdio.h>
#include <stdbool.h>

int main () {
    // logical operator && (AND) checks if two or more conditions are true

    float temp1 = 25;        // Celsius temperature
    bool sunny = true;      

    if (temp1 >= 0 && temp1 <= 30 && sunny) {
        printf("\nThe weather is good!\n");
    }
    else {
        printf("\nThe weather is bad!\n");
    }



    // logical operator || (OR) checks if at least one condition is true

    float temp2 = 15;      // Celsius temperature
    bool rainy = false;
    bool cloudy = false;

    if (temp2 <= 0 || temp2 >= 30 || rainy == true || cloudy == true) {
        printf("\nThe weather is bad!\n");
    }
    else {
        printf("\nThe weather is good!\n");
    }



    // logical operator ! (NOT) reverses the state of a condition

    bool snowy = false;

    if (!snowy) {
        printf("\nIt's freezing outside!\n");
    }
    else {
        printf("\nIt's freezing and snowy outside!\n");
    }

    return 0;
}