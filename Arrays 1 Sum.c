#include <stdio.h>

int main(){
    int a[10];
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        printf("Enter the input for index %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Array elements are as follows: \n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
        sum += a[i];
    }
    printf("\nThe sum is: %d", sum);
    return 0;
}
