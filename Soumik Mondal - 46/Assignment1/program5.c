#include <stdio.h>
            // Calculate power without using pow function // OK
double power(double base, int exponent) {
    double result = 1.0;

    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

            // Input the base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

            // Calculate and print the result
    double result = power(base, exponent);
    printf("Result: %lf\n", result);

    return 0;
}
