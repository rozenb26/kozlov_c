#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birthDate;
};

int main() {
    struct Person persons[3];
    
    strcpy(persons[0].name, "Алексей");
    persons[0].birthDate.day = 15;
    persons[0].birthDate.month = 5;
    persons[0].birthDate.year = 1995;
    
    strcpy(persons[1].name, "Мария");
    persons[1].birthDate.day = 23;
    persons[1].birthDate.month = 8;
    persons[1].birthDate.year = 2001;
    
    strcpy(persons[2].name, "Дмитрий");
    persons[2].birthDate.day = 10;
    persons[2].birthDate.month = 12;
    persons[2].birthDate.year = 2003;
    
    printf("Все люди:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s, дата рождения: %d.%d.%d\n", 
               persons[i].name,
               persons[i].birthDate.day, 
               persons[i].birthDate.month, 
               persons[i].birthDate.year);
    }
    
    printf("\nРодившиеся после 2000 года:\n");
    for (int i = 0; i < 3; i++) {
        if (persons[i].birthDate.year > 2000) {
            printf("%s, %d.%d.%d\n", 
                   persons[i].name,
                   persons[i].birthDate.day, 
                   persons[i].birthDate.month, 
                   persons[i].birthDate.year);
        }
    }
    
    return 0;
}