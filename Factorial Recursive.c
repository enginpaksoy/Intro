#include <stdio.h>

unsigned long long int factorial(int num);

int main() {
    int n;
    printf("%s", "Enter the number: ");
    scanf("%d", &n);
    printf("%llu", factorial(n));
}

unsigned long long int factorial(int num){

    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return factorial(num - 1) * num;
    }
}
