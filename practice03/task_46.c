#include <stdio.h>

int main(void) {
    int normal;
    printf("LEN: ");
    scanf("%d", &normal);

    int reverse = 0;
    int len = 0;

    do {
        normal = normal / 10;
        len += 1;
    }  while (normal != 0);

    

    printf("%d\n", len);

    return 0;
}