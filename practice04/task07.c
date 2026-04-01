#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int flag = 1;
    for (int i = 0; i < N-1; i++) {
        if (numbers[i] < numbers[i+1]) flag = 1;
        else flag = 0;
    }
    
    if (flag == 1) printf("YES");
    else printf("NO");
    
    }
