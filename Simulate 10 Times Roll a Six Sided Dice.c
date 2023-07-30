#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(void) {

    srand(time(NULL));
    for(int i = 1; i <= 10; i++){
        printf("%d ", 1 + (rand() % 6 ));
    }
return 0;
 }
