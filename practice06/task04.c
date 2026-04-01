
#include <stdio.h> 
void show(int* arr, int *n) {
    for (int i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}
void add(int* arr, int* n) {
    int value;
    scanf("%d", &value);
    arr[*n] = value;
    (*n)++;
}
void remove_item(int* arr, int* n) {
    int new_arr[*n-1];
    for (int i = 0; i < *n-1; i++) {
        new_arr[i] = arr[i];
    }
    return;
}
void find(int* arr, int *n) {
    int count = 0;
    int value;
    int flag = 0;
    scanf("%d",&value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) { printf("Элемент %d найден. Позиция - %d\n", value, count);
        count++;
        flag = 1;
        }
    }
    if (flag == 0) printf("Элемет не найден");
    printf("\n");
}

void (*menu[])() = {show, add, remove_item, find};

int main() {
    int n = 5;
    int arr[100];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    int choice;
    do {
        printf("\n========== КОНСОЛЬНОЕ МЕНЮ ==========\n");
        printf("1. Показать массив\n");
        printf("2. Добавить элемент\n");
        printf("3. Удалить элемент\n");
        printf("4. Найти элемент\n");
        printf("0. Выход\n");
        printf("Выберите пункт меню: ");
        scanf("%d", &choice);
        if (choice == 1) {
            show(arr, &n);
        }
        else if (choice == 2) {
            add(arr, &n);
        }
        else if (choice == 3) {
            remove_item(arr, &n);
        }
        else if (choice == 4) {
            find(arr, &n);
        }
        else if (choice == 0) {
            printf("Программа завершена.\n");
        }
        else {
            printf("Неверный выбор! Попробуйте снова.\n");
        }
        
    } while (choice != 0);
    
    return 0;
}








