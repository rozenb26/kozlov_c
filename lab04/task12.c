#include <stdio.h>
#include <stdlib.h>

const char *filename = "test.bin";

struct Person
{
    char name[100];
    int age;
};

struct Menu
{
    int n;
    char *str;
    void (*action)(void);
};


void add_person() {
    FILE *file;
    struct Person person;

    scanf(" %99[^\n]", person.name); //  %99[^\n] - читает всю строку, чет не получилось через fgets прочитать нормально (перенос строки засчитывался как строка) потому пришлось так
    scanf("%d", &person.age);

    file = fopen(filename, "ab");
    if (file == NULL) {
        printf("error add data");
        return;
    }
    fwrite(&person, sizeof(struct Person), 1, file);
    fclose(file);
}

void show_list() {
    FILE *file;
    struct Person person;
 
    file = fopen(filename, "rb");
    if (file == NULL) {
        printf("error read data");
        return;
    }

    while (fread(&person, sizeof(struct Person), 1, file) == 1) {
        printf("%s %d\n", person.name, person.age);
    }

    fclose(file);
}

void clear_file() {
    FILE *file = fopen(filename, "wb");
    if (file) {
        fclose(file);
    }
}

void exit_programm() {
    printf("end\n");
    exit(0);
}

int main() {
    struct Menu menu[] = {
        {1, "добавить человека", add_person},
        {2, "показать всех", show_list},
        {3, "очистить базу", clear_file},
        {0, "выход", exit_programm}
    };
    int choice;
    int menu_size = sizeof(menu) / sizeof(menu[0]);

    while (1) {
        for (int i = 0; i < menu_size; i++) {
            printf("%d %s\n", menu[i].n, menu[i].str);
        }
        printf("выбор: ");
        scanf("%d", &choice);
        for (int i = 0; i < menu_size; i++) {
            if (menu[i].n == choice) {
                menu[i].action();
                break;
            }
        }
    }
}