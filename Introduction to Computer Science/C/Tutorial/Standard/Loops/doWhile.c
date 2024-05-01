#include <stdio.h>

int n = 0, sum = 0;

int main() {
    printf("\nHello! Welcome to the consecutive sum calculator!");
    printf("\nOBS: Enter \"0\" to end the program and get the final sum\n\n");

    do {
        while (1) {
            printf("Enter a integer number: ");
            if (scanf(" %d", &n) != 1) {
                printf("Error: Please enter a valid integer number!\n\n");
                while (getchar() != '\n');
                continue;
            }

            break;
        }

        if (n != 0) {
            sum += n;
        }
    }
    while (n != 0);

    printf("\nSum: %d", sum);

    return 0;
}