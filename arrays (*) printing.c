#include <stdio.h>

 int main(){
    int x;
    printf("Enter the number of array elements: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter the array elements: ");
     for (size_t i = 0; i < x; i++) {
         scanf("%d", &arr[i]);
     }
    printf("%s %8s %14s\n", "Element", "Value", "Bar Chart");
     for (size_t i = 0; i < x; i++) {
         printf("%8zu%9d%6s", i, arr[i], "");
         for (size_t j = 1;  j <= arr[i] ; j++) {
             printf("%c", '*');
         }
         puts("");
     }
}
