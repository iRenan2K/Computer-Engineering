#include <stdio.h>
#include <math.h>

float s0;

int main() {
    printf("\nHello! Welcome to the Time Conversion program!\n");

    while (1) {                                                                                         // while (1) {                                                                  
        printf("\nEnter the time, in seconds: ");                                                       //    printf("\nEnter the time, in seconds: ");
        if (scanf(" %f", &s0) == 1 && s0 >= 0 && fmod(s0, 1) == 0) {                                    //    if (scanf(" %f", &s0) != 1 || s0 < 1 || fmod(s0, 1) != 0) {
            break;                                                                                      //        printf("Invalid input! Please enter a valid natural number greater than or equal to one!\n");
        }                                                                                               //        while (getchar() != '\n');
        //                                                                                              //        continue;
        printf("Invalid input! Please enter a valid natural number greater than or equal to one!\n");   //    }
        while (getchar() != '\n');                                                                      //
    }                                                                                                   //    break;                                                                                           // }    
    //                                                                                                  // }
    printf("\n%02d:%02d:%02d", s0 / 3600, s0 % 3600 / 60, s0 % 60);

    return 0;
}