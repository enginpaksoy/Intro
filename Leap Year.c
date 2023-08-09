#include <stdio.h>

int main() {
    int year;
    printf("%s", "Enter the year: ");
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("%s", "This is a leap year.");
    }
    else if(year % 100 == 0){
        printf("%s", "This isn't a leap year.");
    }
    else if(year % 4 == 0){
        printf("%s", "This is a leap year.");
    }
    else{
        printf("%s", "This isn't a leap year.");
    }
    return 0;
}
