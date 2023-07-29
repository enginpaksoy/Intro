#include <stdio.h>
int main(){
    int rows, columns, totalRow;
    printf("Enter number of rows: ");
    scanf("%d", &totalRow);

    for(rows = 1; rows <= totalRow; rows++){
        for(columns = 1; columns <= totalRow; columns++){
            if(rows == 1 || rows == totalRow || columns == 1 || columns == totalRow || rows == columns || rows + columns == totalRow + 1) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
