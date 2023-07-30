#include <stdio.h>

int main(){
    int num1, num2, gcd = 1;

    printf("Enter the two number: ");
    scanf("%d%d", &num1, &num2);
    printf("Common Divisiors: ");
    for(int i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            if(i == 1){
                continue;
            }
            gcd = i;
            printf("%d ", gcd);
        }
    }
    printf("\nGreatest Common Divisior: %d", gcd);
}
