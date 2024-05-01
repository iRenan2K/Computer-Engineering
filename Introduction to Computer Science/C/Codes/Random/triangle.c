#include <stdio.h>

int main() {
    int side[3];
    char letter[3] = {'a', 'b', 'c'};

    printf("\nHello! Welcome to the Right-Angled Triangle existence verifier program!\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter the \"%c\" side: ", letter[i]);
        scanf(" %d", &side[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (side[i] > side[j]) {
                int temp = side[i];
                side[i] = side[j];
                side[j] = temp;
            }
        }
    }

    if (side[0]*side[0] + side[1]*side[1] == side[2]*side[2]) {
        printf("\nThe triangle %d, %d and %d exists!", side[0], side[1], side[2]);
    }
    else {
        printf("\nThe triangle %d, %d and %d DOES NOT exist!", side[0], side[1], side[2]);
    } 

    return 0;
}

/*
#include <stdio.h>

int main() {
    printf("\nHello! Welcome to the Right-Angled Triangle existence verifier program!\n\n");

    printf("Enter cathetus \'a\': ");
    scanf(" %d", &a);

    printf("Enter cathetus \'b\': ");
    scanf(" %d", &b);

    printf("Enter cathetus \'c\': ");
    scanf(" %d", &c);

    return 0;
}







*/