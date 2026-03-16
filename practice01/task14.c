#include <stdio.h>

int main() {
    int z;
    printf("\n Введите дни недели");
    scanf("%d", &z);
    switch(z) {
        case 1:
            printf("pn");
            break;
        case 2:
            printf("wt");
            break;
        case 3:
            printf("sr");
            break;
        case 4:
            printf("ct");
            break;
        case 5:
            printf("pt");
            break;
        case 6:
            printf("sb");
            break;
        case 7:
            printf("vs");
            break;
    }
}