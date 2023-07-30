#include <stdio.h>

unsigned long long int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    unsigned long long int result = factorial(num);
    printf("Factorial %d is %d", num, result);

    return 0;
}
