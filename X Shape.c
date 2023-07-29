#include <stdio.h>

int main(){
    int row, column, totalRow;
    printf("Enter number of rows: ");
    scanf("%d", &totalRow);
    for(row = 0; row < totalRow; row++){
        for(column = 0; column < totalRow; column++){
            if( (row == column) || (row + column) == totalRow - 1)
                printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
