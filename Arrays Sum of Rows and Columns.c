#include <stdio.h>

int main() {
    int arr[5][5] = {8, 3, 9, 0, 10, 3, 5, 17, 1, 1, 2, 8, 6, 23, 1, 15, 7, 3, 2, 9, 6, 14, 2, 6, 0};
    int sum_raw = 0;
    int sum_col = 0;
    
    printf("Sum of raws: ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
                sum_raw += arr[i][j];
        }
        printf("%d ", sum_raw);
        sum_raw = 0;
    }
    printf("\nSum of columns: ");
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 5; i++){
                sum_col += arr[i][j];
        }
        printf("%d ", sum_col);
        sum_col = 0;
    }
    return 0;
}
