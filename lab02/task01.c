#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float average;
};

int main() {
    struct Student student1;
    printf("Введите имя: ");
    scanf("%s", student1.name);
    printf("Введите возраст: ");
    scanf("%d", &student1.age);
    printf("Введите средний балл: ");
    scanf("%f", &student1.average);
    
    printf("%s, %d лет, балл %.2f\n", student1.name, student1.age, student1.average);
}