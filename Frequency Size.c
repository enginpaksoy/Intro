#include <stdio.h>
#define ANSWER_SIZE 20
#define FREQUENCY_SIZE 6

int main(){
    int answer[ANSWER_SIZE] = {1, 2, 5, 2, 3, 4, 1, 1, 4, 2, 5, 2, 3, 3, 2, 2, 5, 1, 5, 4};
    int frequency[FREQUENCY_SIZE] = {0};

    for (size_t i = 0; i < ANSWER_SIZE; i++) {
        ++frequency[answer[i]];
    }
    printf("%s %12s\n", "Rating", "Frequency");
    for (size_t j = 1; j < FREQUENCY_SIZE; j++) {
        printf("%6zu %12d \n", j, frequency[j]);
    }
}
