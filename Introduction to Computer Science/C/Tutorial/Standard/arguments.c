#include <stdio.h>

void birthday(char name[], int age) {                // parameters
    printf("\nHappy birthday, dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main(){
    char name[] = "Renan";
    int age = 18;

    birthday(name, age);                             // arguments

    return 0;
}