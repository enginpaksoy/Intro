#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int number);
void printFactors(int number);

int main() {
    
    printf("Perfect numbers between 1 and 10000:\n");
    for(int i = 1; i <= 10000; i++){
        if(isPerfect(i)){
            printf("%d is a perfect number.\n", i);
            printFactors(i);
        }
    }
}
int isPerfect(int number){
    int sumOfFactors = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sumOfFactors += i;
        }
    }
    return sumOfFactors == number;
}
void printFactors(int number){
    printf("Factors: 1 ");
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            printf(" + %d", i);
        }
    }
    printf(" = %d\n", number);
}
