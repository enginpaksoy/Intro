#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "%s", "sdajklsdfhgdshdsh");
    fclose(fp);
    return 0;
}
