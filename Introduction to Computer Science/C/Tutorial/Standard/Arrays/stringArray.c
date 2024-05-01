#include <stdio.h>
#include <string.h>

int main() {
    char cars[][10] = {"Mustang","Corvette","Camaro"};

    //cars[0] = "Tesla";        it doesn't work directly!
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        printf("\n%s", cars[i]);
    }

    printf("\n");

    return 0;
}