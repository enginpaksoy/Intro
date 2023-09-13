#include <stdio.h>

void increment(int* p){
    * p = * p + 1;
}

int main(){
    int a = 8;
    increment(&a);
    increment(&a);
    increment(&a);
    increment(&a);
    increment(&a);
    increment(&a);

    printf("%d", a);
}
