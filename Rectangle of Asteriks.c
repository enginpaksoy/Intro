#include <stdio.h>

int rectangle(int side1, int side2);

int main(){
    int num1, num2;
    printf("Enter the size of the sides of the rectangle: ");
    scanf("%d%d", &num1, &num2);
    printf("%d", rectangle(num1, num2));
}

int rectangle(int side1, int side2){
    for(int i = 1; i <= side1; i++){
        for(int j = 1; j <= side2; j++){
            printf("*");
        }
        printf("\n");
    }
}
