#include <stdio.h>
int main(){
    int row, column, totalRow;
    printf("Enter total number of rows: ");
    scanf("%d", &totalRow);
    for(row = 1; row <= totalRow; row++){
        for(column = 1; column <= row; column++){
            printf("*");
        }
        printf("\n");
    }
    for(row = totalRow-1; row >= 1; row--){
        for(column = 1; column <= row; column++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
