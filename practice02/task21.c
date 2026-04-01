#include <stdio.h>

int main() {
int N;
int fct = 1;
scanf("%d", &N);
for (int i = 1; i < N; i++) {
if (i%2==1) fct *= i;
}
printf("%d", fct);
}

