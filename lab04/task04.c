#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 

    fprintf(file, "%d %d %d\n", 10, 20, 30);
    fprintf(file, "%s %s %s", "Yana", "Dasha", "Ulyana");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("ошибка\n");
        return 1;
    } 

    int a, b, c;
    char name1[100], name2[100], name3[100];

    fscanf(file, "%d %d %d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    fscanf(file, "%s %s %s", name1, name2, name3);
    printf("%s %s %s\n", name1, name2, name3);

    fclose(file);
    return 0;
}