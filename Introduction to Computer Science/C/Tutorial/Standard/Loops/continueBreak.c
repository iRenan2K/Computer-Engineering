#include <stdio.h>

// continue = skips rest of code & forces the next iteration of the loop
// break = exits a loop/switch

int nMin, nMax, nAvoid;

int main() {
    printf("\nHello! Welcome to the Sequence Program!\n\n");
    
    while (1) {
        printf("Enter a MINIMUM limit for the count: ");
        if (scanf(" %d", &nMin) != 1) {
            printf("Error: Please enter a valid integer number!\n\n");
            while (getchar() != '\n');
            continue;
        }

        while (getchar() != '\n');
        break;
    }

    while (1) {
        printf("Enter a MAXIMUM limit for the count: ");
        if (scanf(" %d", &nMax) != 1 || nMax <= nMin) {
            printf("Error: Please enter a valid integer number greater than the minimum limit!\n\n");
            while (getchar() != '\n');
            continue;
        }

        while (getchar() != '\n');
        break;
    }

    while (1) {
        printf("\nEnter a integer number to avoid, between the chosen limits: ");
        if (scanf(" %d", &nAvoid) != 1 || nAvoid <= nMin || nAvoid >= nMax) {
            printf("Error: Please enter a valid integer number, between the chosen limits!\n");
            while (getchar() != '\n');
            continue;          
        }

        break;
    }

    printf("\n");

    for (int i = nMin; i <= nMax; i++) {
        if (i == nAvoid) {
            printf("\n");
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}