#include <stdio.h>

long double power(int base, double exponent);

int main(){
    int base;
    double exponent;
    printf("%s" ,"Enter base: ");
    scanf("%d", &base);
    printf("%s" ,"Enter exponent: ");
    scanf("%lf", &exponent);

    printf("%Lf", power(base, exponent));
}

long double power(int base, double exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}
