#include <stdio.h>

int main(){
    int percentage;
    printf("%s", "input percentage: ");
    scanf("%d", &percentage);
        if(percentage > 100) {
            printf("invalid percentage");
        }
        else if(percentage >= 60) {
            printf("1st division");
        }
        else if(percentage >= 50 && percentage < 60) {
            printf("2nd division");
        }
        else if(percentage >= 40 && percentage < 50) {
            printf("3rd division");
        }
        else if(percentage < 40) {
            printf("fail");
        }
}
