#include <stdio.h>
#include <math.h>

double hypotenuse(double num1, double num2);

int main(){
    double x, y;
    printf("Enter two number: ");
    scanf("%lf %lf", &x, &y);
    printf("%lf", hypotenuse(x, y));
}

double hypotenuse(double num1, double num2){
    return sqrt(num1 * num1 + num2 * num2);
}
