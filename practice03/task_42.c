#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int mul = 1;

    do {
        if (n % 10 != 0) {
            mul *= n % 10;
        }
        n /= 10;
    } while (n != 0);

    printf("%d\n", mul);

    return 0;
}