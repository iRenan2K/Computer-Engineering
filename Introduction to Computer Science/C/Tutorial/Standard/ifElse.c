#include <stdio.h>

int main() {
    int age;

    printf("\nHello! Welcome to Facebook's sign-up webpage!");

    printf("\nPlease, enter your age: ");
    scanf(" %d", &age);

    if (age >= 18) {
        printf("\nYou are now signed up!\n");
    }
    else if (age == 0) {
        printf("\nYou can't sign up! You were just born!\n");
    }
    else if (age < 0) {
        printf("\nYou haven't been born yet!\n");
    }
    else {
        printf("\nYou are too young to sign up!\n");
    }

    return 0;
}