#include <stdio.h>
#include <ctype.h>

int main() {
    // "for" loop = repeats a section of code a limited amount of time

    char count;
    int i, n;

    printf("\nEnter a index number: ");
    scanf(" %d", &n);

    printf("Enter \"C\" for crescent count or \"Z\" for the zero countdown: ");
    scanf(" %c", &count);

    if (toupper(count) == 'C') {
        for (i = n; i <= 2147483647; i+=1) {
            printf("%d\n", i);
        }
    }
    else if (toupper(count) == 'Z') {
        for(i = n; i >= 0; i-=1) {
            printf("%d\n", i);
        }
    }

    return 0;
}