#include <stdio.h>

int main() {
    int a, b, c;
    printf("\n Введите 3 числа");
    scanf("%d %d %d", &a, &b, &c);
    float z = (a+b+c)/3;
    printf("%f", z);
}