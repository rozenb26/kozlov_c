#include <stdio.h>
enum Course {
    FIRST, SECOND, THIRD, FOURTH
};

struct FullStudent {
    char name[50];
    int age;
    enum Course course;
    float average;
};

void addStudent(struct FullStudent arr[], int *count) {
    int courseNum;
    
    if (*count >= 20) {
        printf("Массив полон\n");
        return;
    }
    
    printf("Введите имя: ");
    scanf("%s", arr[*count].name);
    printf("Введите возраст: ");
    scanf("%d", &arr[*count].age);
    printf("Курс (0-1 курс, 1-2 курс, 2-3 курс, 3-4 курс): ");
    scanf("%d", &courseNum);
    arr[*count].course = (enum Course)courseNum;
    printf("Введите средний балл: ");
    scanf("%f", &arr[*count].average);
    
    (*count)++;
    printf("Студент добавлен\n");
}

void printAllStudents(struct FullStudent arr[], int count) {
    char *courseName;
    
    if (count == 0) {
        printf("Список пуст\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        switch (arr[i].course) {
            case FIRST:
                courseName = "1";
                break;
            case SECOND:
                courseName = "2";
                break;
            case THIRD:
                courseName = "3";
                break;
            case FOURTH:
                courseName = "4";
                break;
            default:
                courseName = "?";
        }
        printf("%d. %s, %d лет, %s курс, балл %.2f\n", i + 1, arr[i].name, arr[i].age, courseName, arr[i].average);
    }
}

void searchByName(struct FullStudent arr[], int count, char *name) {
    int found = 0;
    char *courseName;
    
    for (int i = 0; i < count; i++) {
        if (strcmp(arr[i].name, name) == 0) {
            switch (arr[i].course) {
                case FIRST:
                    courseName = "1";
                    break;
                case SECOND:
                    courseName = "2";
                    break;
                case THIRD:
                    courseName = "3";
                    break;
                case FOURTH:
                    courseName = "4";
                    break;
                default:
                    courseName = "?";
            }
            printf("Найден: %s, %d лет, %s курс, балл %.2f\n", arr[i].name, arr[i].age, courseName, arr[i].average);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Студент %s не найден\n", name);
    }
}

void sortByAverage(struct FullStudent arr[], int count) {
    struct FullStudent temp;
    
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j].average < arr[j + 1].average) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct FullStudent students[20];
    int studentCount = 0;
    int choice;
    char searchName[50];
    
    strcpy(students[studentCount].name, "Андреев Андрей");
    students[studentCount].age = 19;
    students[studentCount].course = FIRST;
    students[studentCount].average = 4.1;
    studentCount++;
    
    strcpy(students[studentCount].name, "Борисова Ольга");
    students[studentCount].age = 20;
    students[studentCount].course = SECOND;
    students[studentCount].average = 4.7;
    studentCount++;
    
    strcpy(students[studentCount].name, "Волков Сергей");
    students[studentCount].age = 21;
    students[studentCount].course = THIRD;
    students[studentCount].average = 3.8;
    studentCount++;
    
    do {
        printf("\n--- МЕНЮ ---\n");
        printf("1. Добавить студента\n");
        printf("2. Вывести всех студентов\n");
        printf("3. Поиск по имени\n");
        printf("4. Сортировка по среднему баллу\n");
        printf("0. Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                printAllStudents(students, studentCount);
                break;
            case 3:
                printf("Введите имя: ");
                scanf("%s", searchName);
                searchByName(students, studentCount, searchName);
                break;
            case 4:
                sortByAverage(students, studentCount);
                printf("Сортировка выполнена\n");
                printAllStudents(students, studentCount);
                break;
            case 0:
                printf("Выход\n");
                break;
            default:
                printf("Неверный выбор\n");
        }
    } while (choice != 0);
    
    return 0;
}