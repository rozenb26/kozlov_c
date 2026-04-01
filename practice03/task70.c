#include <stdio.h>

int main() {
int N;
int k;
int sum = 0;
scanf("%d", &N);
scanf("%d", k);
    for (int i = 1; i <= N; i++) {
        int dmax = 1;
        for (int l = 1; l <= i; l++ ) {
            if (i%l == 0 && l > dmax) dmax = l;
        }
        if (dmax == 1) printf("%d", i);
    }   
}

