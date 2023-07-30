#include <stdio.h>

int square(int number);

int main(){
    for(int x = 1; x <= 10; x++){
        printf("%d ", square(x));
    }
    printf("\n");
}

int square(int number){
    return number * number;
}
