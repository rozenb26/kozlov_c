#include <stdio.h>

int main() {
int num;
scanf("%d", &num);
printf("Сотни: %d, Десятки: %d, Единицы: %d\n", num / 100, (num/10) %10, num % 10);

}
