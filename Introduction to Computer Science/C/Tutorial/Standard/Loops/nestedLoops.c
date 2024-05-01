#include <stdio.h>

// Nested loop: a loop inside another loop

int rows, columns;
char symbol;

int main() {
    
    while (1) {
        printf("\nEnter the number of rows: ");
        if (scanf("%d", &rows) != 1 || rows <= 0) {
            printf("Error: Please enter a valid non-zero positive value!\n");
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    while (1) {
        printf("Enter the number of columns: ");
        if (scanf("%d", &columns) != 1 || columns <= 0) {
            printf("Error: Please enter a valid non-zero positive value!\n");
            while (getchar() != '\n');
            continue;
        }

        while (getchar() != '\n');
        break;
    }

    while (1) {
        printf("Enter a symbol to use: ");
        if (scanf("%c", &symbol) != 1) {
            printf("Error: Please enter a valid character value!\n");
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    printf("\n\n");

    for (int i = 1; i <= rows; i++) {           // <====   External Loop
        for (int j = 1; j <= columns; j++) {    // <====   Internal loop
            printf("   %c", symbol);
        }

        printf("\n\n");
    }

    return 0;
}