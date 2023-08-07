#include<stdio.h>

int main(void)
{
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("volume is : %Lf \n", (long double) 4 * PI * radius * radius * radius / 3.0);
    return 0;
}
