#include <stdio.h>

int main(void) {
    int n, k;
    printf("до "); scanf("%d", &n);
    printf("к "); scanf("%d", &k);

    for (int i = 1; i <= n; i++) {
        int flag = 1;

        for (int d = 2; d < i; d++) {
            if ((i % d == 0) && (k % d == 0)) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("%d\n", i);
        }

    }

    

    return 0;
}