#include <stdio.h>
#define SIZE 10
int main() {
    int array[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    printf("Elements in original order\n");

    for(size_t i = 0; i < SIZE; i++){
        printf("%d%s", array[i], " ");
    }
    puts("");
    printf("Elements in ascending order\n");

    for (int pass = 1; pass < SIZE; ++pass) {
        for (size_t i = 0; i < SIZE - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
    for(size_t i = 0; i < SIZE; i++) {
        printf("%d%s", array[i], " ");
    }
}
