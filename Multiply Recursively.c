#include <stdio.h>

int multiply(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    else{
        return a + multiply(a, b - 1);
    }
}
int main(){
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = multiply(num1 , num2);

    printf("The product of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
