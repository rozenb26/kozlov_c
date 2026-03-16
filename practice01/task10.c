#include <stdio.h>

int main() {
    int n;
    printf("\n Введите число");
    scanf("%d", &n);
    printf("\n%d", n&1);
    printf("\n%d", n | 1);
    printf("\n%d", n^1);
    printf("\n%d", ~n);
}