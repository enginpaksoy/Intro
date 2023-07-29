#include <stdio.h>

int main(){

    int sum;

    for(int i = 1; i <= 100; i++){
        if(i % 7 == 0){
            sum += i;
        }
    }
    printf("%d", sum);
}
