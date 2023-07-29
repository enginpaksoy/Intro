#include <stdio.h>
int main(){
    int row, column, totalRow;
    printf("Enter number of rows: ");
    scanf("%d", &totalRow);
    for(row = 1; row <= totalRow; row++){
        for(column = 1; column <= row; column++){
            printf("%d", row);
        }
        printf("\n");
    }
    return 0;
}
