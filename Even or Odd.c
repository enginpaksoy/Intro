#include <stdio.h>

int isEven(int a);

int main(){
    int num;

    while (1){
        printf("Enter series of integers (enter 0 to stop): ");
        scanf("%d", &num);

        if(num == 0){
            break;
        }
        if(isEven(num) == 1){
            printf("%d is even.\n", num);
        }
        else{
            printf("%d is odd.\n", num);
        }
    }
    return 0;
}

int isEven(int a){
    if(a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
