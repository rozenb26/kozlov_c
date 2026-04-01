#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (numbers[i] < 0)  numbers[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        printf(" %d", numbers[i]);

    }
}