#include <stdio.h>

int main(){
    int num;
    int seen[10];
    printf("Enter a number to check repeating digits: ");
    scanf("%d", &num);

    while(num > 0){
        int rem = num % 10;
        if(seen[rem] == 1)
            break;
        seen[rem] = 1;
        num = num / 10;
    }
    if(num > 0){
        printf("We have repeating digits.");
    }
    else{
        printf("We have no repeating digits.");
    }
}
