#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int digits[10] = {0};

    do {
        int num = n % 10;
        digits[num]++;
        n /= 10;
    } while (n != 0);

    for (int i = 0; i < 10; i++) {
        printf("%d - %d\n", i, digits[i]);
    }

    return 0;
}