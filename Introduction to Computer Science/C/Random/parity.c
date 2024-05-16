#include <stdio.h>
#include <ctype.h>

char parity;
long long i, minValue, maxValue, count;

// Function to read an option ("E" or "O") and validate the input
char readOption(const char *prompt, const char *errorMessage) {
    printf("%s", prompt);
    while (scanf(" %c", &parity) != 1 || (toupper(parity) != 'E' && toupper(parity) != 'O')) {
        printf("%s", errorMessage);
        while (getchar() != '\n');
    }

    return toupper(parity);
}

// Function to read the limits ("minValue" and "maxValue") and validate the input
long long readLimit(const char *prompt, const char *errorMessage, long long minValue) {
    long long limit;
    printf("%s", prompt);
    while (scanf(" %lld", &limit) != 1 || limit < minValue) {
        printf("%s", errorMessage);
        while (getchar() != '\n');
    }

    return limit;
}

int main() {
    printf("\nHello! Welcome to the Parity Range Calculator!\n");

    parity = readOption("\nEnter 'E' for even numbers or 'O' for odd numbers: ", "ERROR: Invalid input! Please enter 'E' or 'O': ");

    minValue = readLimit("\nEnter a MINIMUM limit value for the count: ", "ERROR: Invalid input! Please enter a valid natural number: ", 0);

    maxValue = readLimit("Enter a MAXIMUM limit value for the count: ", "ERROR: Invalid input! Please enter a valid natural greater than the minimum value: ", minValue);

    if (parity == 'E' && minValue % 2 != 0) {
        minValue++;
    }
    
    else if (parity == 'O' && minValue % 2 == 0) {
        minValue++;
    }

    for (i = minValue; i <= maxValue; i += 2) {
        printf("\n%lld", i);
    }
    puts("");   // New line (\n)

    count = (maxValue - minValue) / 2 + 1;
    printf("\nTotal numbers in the selected range: %lld\n", count);

    return 0;
}