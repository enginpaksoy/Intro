#include <stdio.h>

void print(char *C){
    int i = 0;
    while (*(C+i) != '\0'){
        printf("%c", *(C+i));
        i++;
    }
    puts("");
}

int main() {
    char name[15] = "Enasdgadsgfas";
    print(name);
}
