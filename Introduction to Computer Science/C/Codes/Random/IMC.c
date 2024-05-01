#include <stdio.h>

int main() {
    float weight, height, IMC;

    printf("\nHello! Welcome to the IMC/BMI calculator!\n");    // arrumar um jeito de lidar com , e .

    printf("\nHow much do you weigh, in kilograms? ");
    while (scanf(" %f", &weight) != 1 || weight <= 0) {
        printf("ERROR: Please enter a number greater than 0 ==> ");
        while (getchar() != '\n');
    }

    printf("\nHow tall are you, in meters? ");
    while (scanf(" %f", &height) != 1 || height <= 0) {
        printf("ERROR: Please enter a number greater than 0 ==> ");
        while (getchar() != '\n');
    }

    IMC = weight / (height * height);

    printf("\nYour IMC/BMI is %f kilograms per square meter\n", IMC);

    if (IMC < 18.5) {
        printf("\nYou're in an underweight situation!\n");
    }
    else if (IMC < 25.1) {
        printf("\nYou're in an optimal weight situation!\n");
    }
    else if (IMC < 30.1) {
        printf("\nYou're in an overweight situation!\n");
    } 
    else if (IMC < 40) {
        printf("\nYou're in an obesity situation!\n");
    }
    else {
        printf("\nYou're in a severe obesity situation!\n");
    }

    printf("\n\n");
    
    printf("IMC/BMI < 18.5            ------>     Underweight\n");
    printf("18.5 <= IMC/BMI < 25.1    ------>     Optimal weight\n");
    printf("25.1 <= IMC/BMI < 30.1    ------>     Overweight\n");
    printf("30.1 <= IMC/BMI < 40      ------>     Obesity\n");
    printf("IMC >= 40                 ------>     Severe obesity\n");

    return 0;
}