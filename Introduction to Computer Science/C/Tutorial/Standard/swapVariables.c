#include <stdio.h>
#include <string.h>

int main() {
    char x[15] = "Water";
    char y[15] = "Wine";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);       // If the length of y < x (in bytes), put all the character arrays the same size (15)
    strcpy(y, temp);

    printf("\nx = %s", x);
    printf("\ny = %s\n", y);

    return 0;
}