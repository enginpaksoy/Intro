#include <stdio.h>

int main(){

    int num;
    printf("Enter a integer: ");
    scanf("%d", &num);
    for (int i = 2; i < num; ++i) {
        if(num % i == 0){
            printf("It's not a prime number.");
            break;
        }
        else{
            printf("It's a prime number.");
            break;
        }
    }
}
