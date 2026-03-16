#include <stdio.h>

int main() {
int N = 0;
int sum = 0;
int k;
scanf("%d", &N);
for (int i = 0; i < N; i++) {
scanf("%d", &k);
if (k%7==0) sum++;
}
printf("%d", sum);
}

