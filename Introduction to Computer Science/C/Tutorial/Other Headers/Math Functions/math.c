#include <stdio.h>
#include <math.h>

int main() {
    const float PI = 3.141592;

    double A = sqrt(9);
    double B = pow(2, 4);       // to the power of
    
    int C = round(3.14);        // round a number
    int D = ceil(3.14);         // always round up a number
    int E = floor(3.99);        // always round down a number
    
    double F = fabs(-100);      // absolute value
    
    double G = log(3);
    
    double H = sin(PI/2);
    double I = cos(2*PI);       // radians
    double J = tan(PI/6);
    
    printf("\n%lf\n", J);

    return 0;
}