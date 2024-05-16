#include <stdio.h>
#include <stdlib.h>

int main() {    // Find a way to deal with floating-point, negative numbers and character inputs
    unsigned int num[2]; 
    unsigned long long evenSum = 0, prodOdd = 1;   // X == num[0]  e Y == num[1]

    for (int i = 0; i < 2 ; i++) {      // Read X and Y values
        do {
            printf("Enter the value %d: ", i + 1);
            if (scanf(" %d", &num[i]) != 1 || num[0] >= num[1]) {
                printf("\nERROR: The \"value 1\" must always be less than the \"value 2\"! ");
                while (getchar() != '\n');
            }
        } while (num[0] >= num[1]);
    }

    for (int j = num[0]; j <= num[1]; j++) {
        if (j % 2 == 0) {
            evenSum += j;
        } else {
            prodOdd *= j;
        }
    }

    printf("\nThe even summation is: %llu", evenSum);
    printf("\nThe odd product notation is: %llu", prodOdd);
    
    return 0;
}