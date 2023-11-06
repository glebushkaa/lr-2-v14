#include <math.h>
#include <stdio.h>

void main() {
    double a, b, x, result;

    // ask for a,b,x values
    printf("Input a,b,x: ");
    scanf("%lf,%lf,%lf", &a, &b, &x);

    // check is function undefined or not
    if (x < -1 || x >= 8) {
        printf("Function undefined");
        return;
    }

    if (x >= -1 && x < 6) {
        // calculate sin and show to user
        result = sin(x);
        printf("Sin result: %lf", result);
        return;
    }

    if (x == 6) {
        // calculate expression and show it to user
        result = 3 * x * x + b * x;
        printf("3x^2+bx result: %lf", result);
        return;
    }

    if (x > 6 && x < 8) {
        // calculate arg for ln
        double arg = a * x - 3 * b;
        if (arg < 0) {
            // show error to user if arg is less than 0
            printf("Ln arg is less than 0");
            return;
        }
        // calculate log and show it to user
        result = log(arg);
        printf("Ln result: %lf", result);
    }
}