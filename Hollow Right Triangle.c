#include <stdio.h>
int main(){
    int rows, columns, totalRow;
    printf("Enter number of rows: ");
    scanf("%d", &totalRow);

    for(rows = 1; rows <= totalRow; rows++){
        for(columns = 1; columns <= rows; columns++){
            if((columns == 1 || rows == totalRow || rows == columns)) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
