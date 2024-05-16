#include <stdio.h>
#include <ctype.h>
#include <math.h>

void printOBS(float tempC);

int main() {
    char unit;
    float tempK, tempF, tempC;

    printf("\nHello! Welcome to the temperature conversion program!\n\n");

    while (1) {
        printf("\nIs the temperature in Kelvin (K), Fahrenheit (F) or Celsius (C)? ");
        scanf(" %c", &unit);
        unit = toupper(unit);
        while (getchar() != '\n');                                                      

        if (unit != 'K' && unit != 'F' && unit != 'C') {
            printf("Error: Enter a valid temperature unit! (K, F or C)\n");
            continue;                                                
        }

        break; 
    }

    switch (unit) {
        case 'K':
            while (1) {
                printf("\nEnter the temperature, in Kelvin: ");
                if (scanf(" %f", &tempK) != 1 || tempK < 0) {
                    printf("Error: Please enter a temperature greater than or equals to 0 (Absolute Zero), in Kelvin!\n");
                    while (getchar() != '\n');
                    continue;
                }

                tempF = (tempK - 273.15) * 1.8 + 32;                            // Kelvin to Fahrenheit    
                tempC = tempK - 273.15;                                         // Kelvin to Celsius
            
                break;
            }

            break;
        case 'F':
            while (1) {
                printf("\nEnter the temperature, in Fahrenheit: ");
                if (scanf(" %f", &tempF) != 1 || tempF < -459.67) {
                    printf("Error: Please enter a temperature greater than or equals to -459.67 (Absolute Zero), in Fahrenheit!\n");
                    while (getchar() != '\n');
                    continue;
                }

                tempK = (tempF - 32) * (5.0 / 9.0) + 273.15;                    // Fahrenheit to Kelvin        
                tempC = (tempF - 32) * (5.0 / 9.0);                             // Fahrenheit to Celsius

                break;
            }

            break;
        case 'C':
            while (1) {
                printf("\nEnter the temperature, in Celsius: ");
                if (scanf(" %f", &tempC) != 1 || tempC < -273.15) {
                    printf("Error: Please enter a temperature greater than or equals to -273.15 (Absolute Zero), in Celsius!\n");
                    while (getchar() != '\n');
                    continue;
                }

                tempK = tempC + 273.15;                                         // Celsius to Kelvin
                tempF = (tempC * 1.8) + 32;                                     // Celsius to Fahrenheit
                
                break;
            }

            break;
    }

    printf("\nThe temperature in Kelvin  is:      %.2f\n", tempK);              
    printf("The temperature in Fahrenheit is:   %.2f\n", tempF);                
    if (tempC == 0) {                                                           
            printf("The temperature in Celsius is:      0.00\n");
        } 
        else {
            printf("The temperature in Celsius is:      %.2f\n", tempC);      
        }

    printOBS(tempC);
        
    return 0;
}

void printOBS(float tempC) {
        if (fabs (tempC + 273.15) < 0.0001) {    // Comparing floating-point numbers precisely can be problematic due to limited precision
            printf("\nOBS: These temperatures are characteristic of Absolute Zero!      [Standard Pressure at 1 atm or 101.325 kPa]\n");
        } 
        else if (tempC == 0) {
            printf("\nOBS: These temperatures are characteristic of the Freezing Point of Water!      [Standard Pressure at 1 atm or 101.325 kPa]\n");
        } 
        else if (tempC == 25) {
            printf("\nOBS: These temperatures are characteristic of the Room Temperature! (Approx.)      [Standard Pressure at 1 atm or 101.325 kPa]\n");
        } 
        else if (tempC == 37) {
            printf("\nOBS: These temperatures are characteristic of the Human Body Temperature! (Approx.)      [Standard Pressure at 1 atm or 101.325 kPa]\n");
        } 
        else if (tempC == 100) {
            printf("\nOBS: These temperatures are characteristic of the Boiling Point of Water!      [Standard Pressure at 1 atm or 101.325 kPa]\n");
        }
    }