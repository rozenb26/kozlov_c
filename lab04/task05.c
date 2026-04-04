#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char str[100];

    fgets(str, sizeof(str), stdin);

    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 
    fprintf(file, "%s", str);
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 

    char c[100];
    while (fgets(c, sizeof(c), file) != NULL) {
        printf("%s", c);
    }
    fclose(file);
    return 0;
}