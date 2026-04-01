#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
for (int i = 1; i < N; i++) {
    int k = 1;
        for (int l = 2; l < i; l++) {
            if (i%l==0) k = 0;
           }
        if (k==1) printf("\n%d", i);    
    }
}