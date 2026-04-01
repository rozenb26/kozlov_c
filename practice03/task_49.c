#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int i = n + 1;

    do {
        int copy = i;
        int sum = 0;

        do {
            sum += copy % 10;
            copy /= 10;
        } while (copy != 0);

        if (i % sum == 0) {
            break;
        }

        i++;
    } while (n == n);

    printf("%d\n", i);

    return 0;
}