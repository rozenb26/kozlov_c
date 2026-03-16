#include <stdio.h>

int main() {
    int h;
    printf("\n Введите число ");
    scanf("%d", &h);
    if (h%3==0) printf("\n число делится на 3");
    if (h%2==0) printf("\n число делится на 2");
}