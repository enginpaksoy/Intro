#include <stdio.h>

int main(){

    int factorial = 1;
    printf("Numbers\tFactorials\n");
    for(int i = 1; i <= 5; i++){
        factorial *= i;
        printf("%d\t%d\n", i, factorial);
    }

    return 0;
}
