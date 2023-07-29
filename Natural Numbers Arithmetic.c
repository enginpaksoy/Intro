#include <stdio.h>                              
                                                
int main(){                                     
                                                
    int num, sum = 0, sum_sqr = 0, sum_cube = 0;
    printf("Enter a number: ");                 
    scanf("%d", &num);                          
                                                
    for(int i = 1; i <= num; i++){              
        sum += i;                               
        sum_sqr += i * i;                       
        sum_cube += i * i * i;                  
    }                                           
    printf("%d\n%d\n%d\n", sum, sqr, cube);     
}                                               
