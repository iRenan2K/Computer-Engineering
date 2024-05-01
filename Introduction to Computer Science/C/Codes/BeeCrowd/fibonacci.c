#include <stdio.h>

int terms;
unsigned long long first = 0, second = 1, next;

int main() {
    printf("\nHow many terms of the Fibonacci sequence do you want to display? ");

    while (scanf(" %d", &terms) != 1 || terms < 2) {
        printf("Error: Please enter a natural number of terms greater than or equals 2: ");
        while (getchar() != '\n');
    }

    printf("\nThe first %d terms of the Fibonacci sequence are:\n", terms);
    printf("%llu\n%llu\n", first, second);
    
    for (int i = 3; i <= terms; i++) {
        next = first + second;
        printf("%llu\n", next);
        first = second;
        second = next;
    }

    return 0;
}