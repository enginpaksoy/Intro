#include <stdio.h>

int main(){
    int percentage;
    printf("%s", "input percentage: ");
    scanf("%d", &percentage);
        if(percentage > 100) {
            printf("\ninvalid percentage");
        }
        else if(percentage >= 60) {
            printf("\n1st division");
        }
        else if(percentage > 50 && percentage < 60) {
            printf("\n2nd division");
        }
        else if(percentage > 40 && percentage < 50) {
            printf("\n3rd division");
        }
        else if(percentage < 40) {
            printf("\nfail");
        }
}
