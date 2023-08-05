#include<stdio.h>

void foo();

int main(){
    foo();
    foo();
    foo();
}

void foo(){
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}
