#include <stdio.h>

int main() {
int N;
int k;
int kmax = __INT_MAX__;
int sum = 0;
scanf("%d", &N);
for (int i = 0; i < N; i++) {
scanf("%d", &k);
if (k<kmax && k%2==0) {
    kmax = k;
}
}
printf("%d", kmax);
}

