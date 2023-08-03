#include <stdio.h>

 int main(){
    int n[5];
     printf("Enter the five elements of array N: \n");
     for (size_t i = 0; i < 5; ++i) {
         scanf("%d", &n[i]);
     }

     printf("These elements are: ");
     for (size_t i = 0; i < 5; ++i) {
         printf("%d ", n[i]);
     }
}
