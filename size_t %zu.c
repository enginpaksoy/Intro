#include <stdio.h>

 int main(){
    int n[5];
     printf("Enter the five elements of array N: \n");
     for (size_t i = 0; i < 5; ++i) {
         scanf("%d", &n[i]);
     }

     printf("%s%8s\n", "Element", "Value");
     for (size_t i = 0; i < 5; ++i) {
         printf("%7zu%8d\n", i, n[i]);
     }
}
