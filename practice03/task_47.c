#include <stdio.h>

int main(void) {
    int n;
    printf("ONLY EVEN? ");
    scanf("%d", &n);

    int flag = 1;

    do {
        if ((n % 10) % 2 == 1 ) {
            flag = 0;
            break;
        }
        n /= 10;
    } while (n != 0);

    if (flag == 1) {
        printf("YES");
    } else {
        printf("NO");  
    }

    printf("\n");

    return 0;
}