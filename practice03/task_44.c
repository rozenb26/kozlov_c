#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int max = 0;

    do {
        if (n % 10 > max) {
            max = n % 10;
        }
        n /= 10;
    } while (n != 0);

    printf("%d\n", max);

    return 0;
}