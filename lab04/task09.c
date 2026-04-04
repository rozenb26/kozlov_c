#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char arr;
    int n;

    file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("error open file\n");
        return 1;
    }

    char *a = "I want drink ice latte every day\n";
    fprintf(file, "%s", a);
    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("error read file\n");
        return 1;
    }

    scanf("%d", &n);

    fseek(file, n, SEEK_SET);
    while ((arr = fgetc(file)) != EOF) {
        printf("%c", arr);
    }

    return 0;
}