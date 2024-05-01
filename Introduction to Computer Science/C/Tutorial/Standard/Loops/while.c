#include <stdio.h>
#include <string.h>


int main() {
    // while loop = repeats a section of code possibly unlimited times. 
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[50];

    while (1) {
        printf("\nWhat's your full name? ");
        fgets(name, 50, stdin);
        name[strlen(name) - 1] = '\0';

        if (strlen(name) == 0) {
            printf("Error: Please enter a non-empty valid full name!\n");
            continue;
        }

        break;
    }

    printf("\nHello, %s!", name);

    return 0;
}