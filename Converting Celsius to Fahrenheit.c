#include <stdio.h>

int main(){
    double c, f;
    printf("Enter your Celsius Degree: ");
    scanf("%lf", &c);
    f = (9.0 / 5.0) * c + 32;
    printf("Your Fahrenheit Degree is %.2lf", f);
    return 0;
}
