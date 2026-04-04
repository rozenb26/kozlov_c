#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char name[100];
    int age;
};


int main() {
    FILE *file;
    struct Person person1, person2;

    strcpy(person1.name, "Дон Дарья");
    person1.age = 16;

    file = fopen("test.bin", "wb");
    if (file == NULL) {  
        printf("error open\n");
        return 1;
    }

    size_t w = fwrite(&person1, sizeof(struct Person), 1, file);
    if (w != 1) {  
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
    size_t read = fread(&person2, sizeof(struct Person), 1, file);
    if (read != 1) {   
        printf("error read\n");
        fclose(file);
        return 1;
    }

    printf("%s %d\n", person2.name, person2.age);

    return 0;
}