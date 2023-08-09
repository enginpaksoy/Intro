#include <stdio.h>

int main(){

    int x, y, z;
    printf("%s", "Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    if((x % y == 0 || y % x == 0) && (x % z == 0 || z % x == 0) && (y % z == 0 || z % y == 0)){
        printf("%s", "These are divisible");
    }
    else{
        printf("%s", "These are not divisible");
    }
    return 0;
}
