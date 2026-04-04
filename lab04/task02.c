#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 

    char str[] = {'h', 'e', 'l', 'l', 'o', '\n'};
    int n = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < n; i++) {
        putc(str[i], file);
    }
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 

    char c;
    while ((c = getc(file)) != EOF) {
        printf("%c", c);
    }
    fclose(file);
    return 0;
}