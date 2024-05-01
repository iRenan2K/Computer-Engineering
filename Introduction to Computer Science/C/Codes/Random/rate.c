#include <stdio.h>
#include <ctype.h>
#include <math.h>

char rateType, rateTime;
double rate1, rate2;

int main () {
    printf("\nHello! Welcome to the Interest Rate converter!\n\n");
    
    while (1) {
        printf("\nEnter \"S\" for Simple or \"C\" for Compound interest rate: ");
        scanf(" %c", &rateType);
        rateType = toupper(rateType);
        if (rateType != 'S' && rateType != 'C') {
            printf("Error: Invalid Input! Please enter \"S\" or \"C\"!\n");
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    while (1) {
        printf("Enter \"A\" for Annual or \"M\" for Monthly interest rate: ");
        scanf(" %c", &rateTime);
        rateTime = toupper(rateTime);
        if (rateTime != 'A' && rateTime != 'M') {
            printf("\nERROR: Invalid Input! Please enter \"A\" or \"M\"!\n\n");
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    while (1) {
        printf("\nEnter an value representing the numerical percentage (%%) of the interest rate you want to convert: ");
        if (scanf(" %lf", &rate1) != 1) {
            printf("ERROR: Invalid Input! Please enter a valid integer numerical value!\n");
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    if (rateType == 'S' && rateTime == 'A') {
        rate2 = rate1 * (1.0 / 12.0);
    }
    else if (rateType == 'S' && rateTime == 'M') {
        rate2 = rate1 * 12.0;
    }
    else if (rateType == 'C' && rateTime == 'A') {
        rate2 = pow((1.0 + rate1), (1.0 / 12.0)) - 1.0;
    }
    else if (rateType == 'C' && rateTime == 'M') {
        rate2 = pow((1.0 + rate1), 12.0) - 1.0;
    }

    printf("\nThe old %lf%% is equals to %lf%%\n", rate1, rate2);

    return 0;
}