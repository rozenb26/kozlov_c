#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int sum = 0;
    int index;
    for (int i = 0; i < N; i++) {
        sum += numbers[i];
    }
    printf("%d", sum);
    }
