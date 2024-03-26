#include <stdio.h>
#include <string.h>

int main() {
    const char* str = "adana lkjh zxcv 1235";
    int length = strlen(str);
    char array[4][10];
    int k = 0, j = 0;
    for(int i = 0; i < length; i++){
        char c = str[i];
        if(c != ' '){
            array[k][j++] = c;
        }
        else{
            array[k][j] = '\0';
            k++;
            j = 0;
        }
    }
    array[3][j] = '\0'; //son kelimenin bitimi için
    
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
