#include <stdio.h>

int main() {
int N;
int k;
int kmax = -9999999999;
int sum = 0;
scanf("%d", &N);
for (int i = 0; i < N; i++) {
scanf("%d", &k);
if (k>kmax) {
    kmax = k;
}
}
printf("%d", kmax);
}

