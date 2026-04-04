#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int num[] = {1, 2, 3, 4, 5};
    int size = sizeof(num) / sizeof(num[0]);
    int *rnum = NULL;

    file = fopen("test.bin", "wb");
    if (file == NULL) {  
        printf("error open\n");
        return 1;
    }

    size_t w = fwrite(num, sizeof(int), size, file);
    if (w != size) {  
        printf("error write\n");
        fclose(file);
        return 1;
    }
    fclose(file);

    file = fopen("test.bin", "rb");
    if (file == NULL) {  
        printf("error open read\n");
        return 1;
    }

    rnum = (int*)malloc(size * sizeof(int));
    if (rnum == NULL) {  
        printf("error memory\n");
        fclose(file);
        return 1;
    }
    size_t read = fread(rnum, sizeof(int), size, file);
    if (read != size) {   
        printf("error read\n");
        free(rnum);
        fclose(file);
        return 1;
    }

    fclose(file);
    for (int i = 0; i < size; i++) {
        printf("%d ", rnum[i]);
    }
    printf("\n");
    free(rnum);

    return 0;
}