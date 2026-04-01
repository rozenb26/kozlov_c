#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int max = numbers[0];
    for (int i = 1; i < N; i++) {
        if (numbers[i] > max) max = numbers[i];
    }
    printf("%d", max);
    }
