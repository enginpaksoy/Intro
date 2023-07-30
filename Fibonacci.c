#include <stdio.h>

unsigned long long int fibonacci(int n);

int main(){
    int num;
    printf("Please enter a number to calculate fibonacci: ");
    scanf("%d", &num);
    printf("Fibonacci %d is %d", num, fibonacci(num));
}

unsigned long long int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
