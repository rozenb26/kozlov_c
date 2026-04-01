#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    int index;
    for (int i = 1; i < N; i++) {
        if (numbers[i] < min)  { min = numbers[i]; index = i-1; }
    }
    printf("%d %d", min, index);
    }
