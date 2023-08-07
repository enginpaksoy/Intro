#include <stdio.h>

int function(int a){
    if(a <= 100 && a >= 1) {
        if (a % 2 == 0) {
            return 1; // true
        } else {
            return 0; // false
        }
    }
    else{
        return 0;
    }
}

int main(){
    int a;
    scanf("%d", &a);
    if(function(a)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
