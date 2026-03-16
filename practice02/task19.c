#include <stdio.h>

int main() {
int N;
int k;
int sum = 0;
scanf("%d", &N);
for (int i = 1; i < N; i++) {
if (i%2==0) {
    printf("\n%d", i*i);
}
}
}

