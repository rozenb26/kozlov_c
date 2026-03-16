#include <stdio.h>

int main() {
int N;
int k;
int sum = 0;
scanf("%d", &N);
for (int i = 0; i < N; i++) {
scanf("%d", &k);
if (k<0) {
    sum+=k;
}
}
printf("\n%d", sum);
}

