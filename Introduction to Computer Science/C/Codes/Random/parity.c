#include <stdio.h>
#include <ctype.h>

int main() {
    char parity;
    double temp;
    long long int i, nMin, nMax;

    printf("\nHello! Welcome to the Parity Range Calculator!\n\n");

    while (1) {
        printf("\nEnter 'E' for even numbers or 'O' for odd numbers: ");
        if (scanf(" %c", &parity) != 1 || (toupper(parity) != 'E' && toupper(parity) != 'O')) {
            printf("Invalid input! Please enter 'E' or 'O'!\n");
            while (getchar() != '\n');
            continue;
        }
        
        break;
    }

    while (1) {
        printf("\nEnter a MINIMUM limit value for the count: ");
        if (scanf(" %lf", &temp) != 1 || temp != (long long int)temp    ) {
            printf("Invalid input! Please enter a valid integer!\n");
            while (getchar() != '\n');
            continue;
        }
        nMin = (long long int)temp;
        break;
    }

    while (1) {
        printf("Enter a MAXIMUM limit value for the count: ");
        if (scanf(" %lf", &temp) != 1 || temp != (long long int)temp || temp <= nMin) {
            printf("\nInvalid input! Please enter a valid integer greater than %lld!\n\n", nMin);
            while (getchar() != '\n');
            continue;
        }
        nMax = (long long int)temp;
        break;
    }

    if (parity == 'E') {
        if (nMin % 2 != 0) {
            nMin++;
        }
        for (i = nMin; i <= nMax; i += 2) {
            printf("\n%lld", i);
        }
        printf("\n");

    } 
    else if (parity == 'O') {
        if (nMin % 2 == 0) {
            nMin++;
        }
        for (i = nMin; i <= nMax; i += 2) {
            printf("\n%lld", i);
        }
        printf("\n");
    }

    long long int count = (nMax - nMin) / 2 + 1;
    printf("\nTotal numbers in the selected range: %lld\n", count);

    return 0;
}