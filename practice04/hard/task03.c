#include <stdio.h>
int main(void) {
    int N;
    int S;
    int count = 0;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
  for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 1; j < N; j++) {
        if (numbers[j] > numbers[i]) cnt +=1;
        if (cnt > count) count = cnt;
        }
    }
    printf("%d", count);
}
