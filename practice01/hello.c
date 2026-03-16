#include <stdio.h>

int main() {
        printf("\n Задача 6");
    int a, b, c;
    printf("\n Введите 3 числа");
    scanf("%d %d %d", &a, &b, &c);
    float z = (a+b+c)/3;
    printf("%f", z);
    printf("\n Задача 7");
    int x,y;
    printf("\n Введите 2 числа");
    scanf("%d %d", &x, &y);
    printf("%f", (float)x/y);

    printf("\n Задача 8");

int g = 2;
g+=1;
printf("\n %d", g);

printf("\n Задача 9. Введите число ");
int h;
scanf("%d", &h);
if (h%3==0) printf("\n число делится на 3");
if (h%2==0) printf("\n число делится на 2");

printf("\n Задача 10, введите число");
int n;
scanf("%d", &n);
printf("\n%d", n&1);
printf("\n%d", n | 1);
printf("\n%d", n^1);
printf("\n%d", ~n);


}