#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i <= n; i++) {
        int flag = 0;
        int copy = i;

        do {
            if (copy % 10 == 5) {
                flag = 1;
            }
            copy /= 10;
        } while (copy != 0);

        if (flag == 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}