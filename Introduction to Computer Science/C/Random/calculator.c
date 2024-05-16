#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double n1, n2, result;

    printf("\nHello! Welcome to the simple calculator program!\n\n");

    while (1) {
        printf("\nEnter what operator will be used (+) (-) (*) (/): ");
        if (scanf(" %c", &operator) != 1 || operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Invalid operator! Please enter a valid operator!\n");
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    while (1) {
        printf("\nEnter the first number: ");
        if (scanf(" %lf", &n1) != 1 || isnan(n1) || isinf(n1)) {               // functions "isnan" and "isinf" checks if the 
            printf("Invalid input! Please enter a valid number!\n");           // number is Nan (Not a Number), or if the number
            while (getchar() != '\n');                                         // is infinity, respectively
            continue;                                                                
        }

        break;
    }

    while (1) {
        printf("Enter the second number: ");
        if (scanf(" %lf", &n2) != 1 || isnan(n2) || isinf(n2)) {                        
            printf("\nInvalid input! Please enter a valid number!\n\n");                                                 
            while (getchar() != '\n');                                                                                                                                                                    
            continue;                                                                                        
        }
        else if (n2 == 0 && operator == '/') {
            printf("\nCannot divide by zero!\n\n");
            while (getchar() != '\n');
            continue;
        }                                                                       // scanf function returns the number of variables
        //                                                                      // that were duly completed, so if != 1, it would                                                                                                                     
        break;                                                                  // indicate that the input was not successful or
    }                                                                           // that variable "n2" could not be correctly
    //                                                                          // populated with a floating point number
    while (1) {                                                                                      
        switch (operator) {                             
            case '+':
                result = n1 + n2;
                printf("\nResult: %lf\n", result);
                break;
            case '-':
                result = n1 - n2;
                printf("\nResult: %lf\n", result);
                break;
            case '*':
                result = n1 * n2;
                printf("\nResult: %lf\n", result);
                break;
            case '/':
                result = n1 / n2;
                printf("\nResult: %lf\n", result);    
                break;
            default:
                printf("Error! Invalid operator!\n");
                while (getchar() != '\n');
                continue;
        }

        break;
    }

    return 0;
}