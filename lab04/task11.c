#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char a;

    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("error open file\n");
        return 1;
    }

    fprintf(file, "Hello\n");
    fprintf(file, "aaaaaaa\n");

    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("error read file\n");
        return 1;
    }

    while (1) {
        a = fgetc(file);
        if (ferror(file)) {
            printf("error\n");
            break;
        }
        if (feof(file)) {
            printf("end\n");
            break;
        }
        printf("%c", a);

    }
    fclose(file);
    
    return 0;
}