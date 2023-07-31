#include <stdio.h>

int sumOfDigits(int number);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of digits is: %d", sumOfDigits(num));
}
int sumOfDigits(int number){
    int sum = 0;
    while(number != 0){
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
