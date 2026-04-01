#include <stdio.h>

int main(void) {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d",&numbers[i]);
    }
    for (int i = 9; i >= 0; i--) {
        printf("\n%d", numbers[i]);
    }
    return 0;

}