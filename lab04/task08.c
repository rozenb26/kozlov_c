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
    struct Person persons[3];
    struct Person rperson[3];

    strcpy(persons[0].name, "даша");
    persons[0].age = 16;
    strcpy(persons[1].name, "яна");
    persons[1].age = 17;
    strcpy(persons[2].name, "ульяна");
    persons[2].age = 18;
    
    file = fopen("test.bin", "wb");
    if (file == NULL) {  
        printf("error open\n");
        return 1;
    }

    size_t w = fwrite(persons, sizeof(struct Person), 3, file);
    if (w != 3) {  
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
    size_t read = fread(rperson, sizeof(struct Person), 3, file);
    if (read != 3) {   
        printf("error read\n");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("%s %d\n", rperson[i].name, rperson[i].age);
    }

    return 0;
}