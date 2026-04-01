#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int sum, mul;
    int copy;

    for (int i = 1; i <= n; i++) {
        sum = 0;
        mul = 1;

        copy = i;
        do {
            sum += copy % 10;
            copy /= 10;
        } while (copy != 0);

        copy = i;
        do {
            mul *= copy % 10;
            copy /= 10;
        } while (copy != 0);

        if (mul == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}