#include <stdio.h>

int timeInSeconds(int hours, int minutes, int seconds);
int timeInDifference(int h1, int m1, int s1, int h2, int m2, int s2);

int main(){
    int h1, m1, s1, h2, m2, s2;
    printf("Enter the first time(hours minutes seconds): ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Enter the second time(hours minutes seconds): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    int secondsSinceLastStrike = timeInDifference(12, 0 , 0, h1, m1, s1);
    int timeDifference = timeInDifference(h1, m1, s1, h2, m2, s2);

    printf("Seconds since last time at 12: %d\n", secondsSinceLastStrike);
    printf("Time difference between two times in seconds: %d\n", timeDifference);
}

int timeInSeconds(int hours, int minutes, int seconds){
    return hours * 3600 + minutes * 60 + seconds;
}
int timeInDifference(int h1, int m1, int s1, int h2, int m2, int s2){
   int time1 = timeInSeconds(h1, m1, s1);
   int time2 = timeInSeconds(h2, m2, s2);

   if(time2 < time1){
       time2 += 43200;
   }
   return time2 - time1;
}
