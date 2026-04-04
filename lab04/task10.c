#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int size;

    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("error open file\n");
        return 1;
    }
    fprintf(file, "Hello\n");
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fclose(file);
    printf("%d байт\n", size);
    return 0;
}