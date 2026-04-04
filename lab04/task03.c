#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 

    fputs("Яна\n", file);
    fputs("Даша\n", file);
    fputs("Ульяна\n", file);
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