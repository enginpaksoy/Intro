#include <stdio.h>

int main(){
    float a1, d;
    int n;
    printf("%s", "Enter the initial term (a1): ");
    scanf("%f", &a1);
    printf("%s", "Enter the difference in the Arithmetic Sequence (d): ");
    scanf("%f", &d);
    printf("%s", "Enter the number of the Elements in the Arithmetic Sequence (n): ");
    scanf("%d", &n);
    printf("%s %f", "Enter the n-th term of the Arithmetic Sequence: ", a1 + d * (n-1));
    
}
