#include <stdio.h>

int main() {
    // Write C code here
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d", sizeof(a) / sizeof(a[0]));

    return 0;
}
