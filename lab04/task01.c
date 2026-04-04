#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");

    if (file != NULL) {
        printf("Opened\n");
    } else {
        printf("Error\n");
        return 1;
    }
    fclose(file);
    return 0;
}