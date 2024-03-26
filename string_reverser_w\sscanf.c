#include <stdio.h>
#include <string.h>

int main() {
    const char* str = "adana lkjh zxcv 1235";
    int length = strlen(str);
    char array[4][10];
    int k = 0, j = 0;
    sscanf(str, "%s %s %s %s", array[0], array[1], array[2], array[3]);
    
    for(int i = 0; i < 4; i++){
        printf("%s ", array[i]);
    }
    
    for(int i = 0; i < 4; i++){
        int length = strlen(array[i]);
        for(int j = 0; j < length/2; j++){
            char hold = array[i][j];
            array[i][j] = array[i][length - j -1];
            array[i][length - j - 1] = hold;
        }
    }
    
    for(int i = 0; i < 4; i++){
        printf("%s ", array[i]);
    }
    return 0;
}
