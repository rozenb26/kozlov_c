#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float average;
};

int main() {
    struct Student group[5];
    float maxAvg = 0;
    int maxIndex = 0;
    
    strcpy(group[0].name, "Петров Петр");
    group[0].age = 19;
    group[0].average = 4.2;
    
    strcpy(group[1].name, "Сидорова Анна");
    group[1].age = 20;
    group[1].average = 4.8;
    
    strcpy(group[2].name, "Козлов Дмитрий");
    group[2].age = 21;
    group[2].average = 3.9;
    
    strcpy(group[3].name, "Васильева Елена");
    group[3].age = 19;
    group[3].average = 5.0;
    
    strcpy(group[4].name, "Николаев Артем");
    group[4].age = 20;
    group[4].average = 4.3;
    
    for (int i = 0; i < 5; i++) {
        printf("%d. %s, %d лет, балл %f\n", i + 1, group[i].name, group[i].age, group[i].average);
        if (group[i].average > maxAvg) {
            maxAvg = group[i].average;
            maxIndex = i;
        }
    }
    printf("%s, %f\n", group[maxIndex].name, group[maxIndex].average);
}