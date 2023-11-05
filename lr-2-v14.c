#include <math.h>
#include <stdio.h>

enum state { UNDEFINED, NEGATIVE_LN };

void main() {
    double a, b, x, result;
    enum state state;

    printf("Input a,b,x: ");
    scanf("%lf,%lf,%lf", &a, &b, &x);

    if (x < -1 || x > 8) return;

    if (x >= -1 && x < 6) {
        result = sin(x);
        printf("Sin result: %lf", result);
        return;
    }

    if (x == 6) {
        result = 3 * x * x + b * x;
        printf("3x^2+bx result: %lf", result);
        return;
    }

    if (x > 6 && x < 8) {
        double arg = a * x - 3 * b;
        if (arg < 0) {
            printf("Ln arg is less than 0");
            return;
        }
        result = log(arg);
        printf("Ln result: %lf", result);
        return;
    }
}