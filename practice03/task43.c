#include <stdio.h>

int main(void) {
    int normal;
    scanf("%d", &normal);
    int rev = 0;
    int copy = normal;
    
    while (normal != 0) {
        rev = rev * 10 + normal % 10;
        normal /= 10;
    }
    if (rev == copy) {
        printf("YES");
    } else {
        printf("NO");
    }
    printf("\n");
    
    return 0;
}