#include <stdio.h>
int main(void) {
    int N;
    int S;
    int count = 0;
    scanf("%d", &N);
    scanf("%d", &S);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = i; j < N; j++) {
        sum += numbers[j];
        if (sum == S) {
            count++;
        }
    }
}
}