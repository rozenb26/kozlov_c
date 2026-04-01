#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int flag = 1;
        int copy = i;

        do {
            if (copy % 10 != 0) {
                if (i % (copy % 10) != 0) {
                    flag = 0;
                }
            }
            copy /= 10;
        } while (copy != 0);

        if (flag == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}