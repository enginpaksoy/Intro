#include <stdio.h>

int main() {
    FILE *fptr;
    double total = 0;
    int array[1000];
    fptr = fopen("elephant seals.txt", "r+");
    for (int i = 0; i < 1000; ++i) {
        fscanf(fptr, "%d", &array[i]);
        total += array[i];
    }
    printf("%.2lf", total / 1000);
}
