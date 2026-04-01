#include <stdio.h>

int main() {
int N;
int factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880}; 

scanf("%d", &N);
for (int i = 1; i < (N+1); i++) {
    int temp = i;
    int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += factorial[digit];
            temp /= 10;
        }
    if (sum == i) printf("\n%d", i);
    }
}   