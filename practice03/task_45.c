#include <stdio.h>

int main(void) {
    int normal;
    scanf("%d", &normal);

    int reverse = 0;
    int copy = normal;
    
    while (normal != 0) {
        reverse = reverse * 10 + normal % 10;
        normal /= 10;
    }

    printf("%d\n", reverse);    

    return 0;
}