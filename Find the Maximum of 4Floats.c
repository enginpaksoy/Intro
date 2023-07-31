#include <stdio.h>

float max(float a, float b, float c, float d);

int main(){
    float a, b, c, d;
    printf("Enter four floating-point numbers: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    printf("Maximum of these numbers is %f", max(a, b, c, d));
}
float max(float a, float b, float c, float d){
    float max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }
    return max;
}
