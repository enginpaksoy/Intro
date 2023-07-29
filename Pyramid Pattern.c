#include <stdio.h>

int main() {

    int totalRow, row, spaces, stars;
    printf("Enter number of rows: ");
    scanf("%d", &totalRow);

    for(row = 1; row <= totalRow; row++){
        //get spaces
        for(spaces = 1; spaces <= totalRow - row; spaces++){
            printf(" ");
        }
        //get stars
        for(stars = 1; stars <= 2 * row - 1; stars++){
            printf("*");
        }
        //get new line
        puts("");
    }
    return 0;
}
