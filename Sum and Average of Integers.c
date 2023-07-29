#include <stdio.h>

int main(){

    int x, num;
    int total = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        printf("Enter your numbers: ");
        scanf("%d", &num);
        total += num;
    }
    printf("Sum of integers: %d\n", total);
    double average = total / (double)x;
    printf("Average of integers: %lf\n", average);

    return 0;
}
