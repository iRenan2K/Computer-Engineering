#include <stdio.h>

int main() {
    
    /*
    
     variable =   Allocated space in memory to store a value.
                  We refer to a variable's name to access the stored value.
                  That variable now behaves as if it was the value it contains.
                  BUT we need to declare what type of data we are storing.

    */

    int x;                   // declaration
    x = 123;                 // initialization (storing values on the memory)
    int y = 321;             // declaration + initialization

    int age = 18;            // integer
    float height = 1.8;      // floating point number
    char grade = 'A';        // single character
    char name[] = "Renan";   // array of characters
    
    // % = format specifier
    printf("\nHello %s!\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("You are %.2fm tall\n", height);

    return 0;
}