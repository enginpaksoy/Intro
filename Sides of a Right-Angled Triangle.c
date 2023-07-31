#include <stdio.h>

int is_right_angle_triangle(int a, int b, int c){
    if(a == 0 || b == 0 || c == 0){
        return 1;
    }
    else if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a, b, c;

    printf("Enter the integers: ");
    while (1){
        scanf("%d%d%d", &a, &b, &c);
        if(is_right_angle_triangle(a, b, c) == 1){
            printf("The three integers do not form a right-angled triangle.\n");
        }
        else if(is_right_angle_triangle(a, b, c) == 0){
            printf("The three integers form a right-angled triangle.\n");
        }
    }

    return 0;
}
