#include <stdio.h>
#include <math.h>

double area (double x, double y, double z);

int main(){

    double num1, num2, num3;
    printf("Enter the three sides of triangle: ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);
    if(num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1){
        printf("Your area is %lf", area(num1, num2, num3));
    }
    else{
        printf("It's not a triangle.");
    }

}
double area (double x, double y, double z){
    if (x + y > z && x + z > y && y + z > x) {
        double s = (x + y + z) / 2;
        double area = sqrt(s * (s - x) * (s - y) * (s - z));
        return area;
    }
}
