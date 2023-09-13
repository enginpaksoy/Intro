#include <stdio.h>

int main(){
    int a;
    int *p;
    p = &a;
    a = 8996;
    printf("%d %d\n", p, *p);
    printf("%d %d\n", p+1, *(p+1));// derefercing
    char *p0;
    p0 = (char*)p;
    printf("%d %d\n", p0, *p0);
    printf("%d %d\n", p0+1, *(p0+1));
}
